#ifndef _TREE
#define _TREE

struct tree{
  int value;
  struct tree* left;
  struct tree* right;
  struct tree* parent;
};

typedef struct tree TREE;

struct tree *new_tree(int x);
struct tree *join_tree(TREE *left, TREE* right, int node);
void clean_tree(TREE* tr);
void clean_tree2(TREE* tr);
void print_tree_prefix(TREE* tr);
int count_tree__nodes(TREE* t);
int count_tree__nodes2(TREE* t);

#endif
