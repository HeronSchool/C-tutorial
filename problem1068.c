// problem1068.c
// 트리
#include <stdio.h>
#define max 50
int treestack[max], top = 0;
int parentof[max];

push (int v)
{
  treestack[top++] = v;
}

int pop()
{
  return treestack[--top];
}

int stackempty()
{
  return !top;
}

main()
{
  int n, i, value, delete_node, tree_root, subtree_root;
  int leaf_count = 0, subtree_child_count = 0;

  scanf(" %d", &n);

  // parent input
  for(i = 0; i < n; i++)
  {
    scanf(" %d", &value);
    parentof[i] = value;

    if(value == -1) tree_root = i;
  }

  scanf(" %d", &delete_node);

  // tree stack
  push(tree_root);

  while(!stackempty())
  {
    // subtree
    subtree_root = pop();
    subtree_child_count = 0;
    
    // count children of a subtree
    // skip the subtree
    if(subtree_root == delete_node) continue;
    
    for(i = 0; i < n; i++)
    {
      // child of the root
      if(subtree_root == parentof[i])
      {
        // skip the child node
        if(i == delete_node) continue; // check

        push(i);
        subtree_child_count++;
      }
    }

    // count leaf nodes (zero childeren)
    if(subtree_child_count == 0)
    {
      leaf_count++;
    }
  }
  
  // result
  printf("%d", leaf_count);
  
}