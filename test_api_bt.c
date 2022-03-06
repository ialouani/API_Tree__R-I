#include "./tree.h"
#include<stdio.h>
#include<stdlib.h>

static void test_all(){
  TREE* tr00_1=new_tree(4);
  TREE* tr00_2=new_tree(5);
  TREE* tr00_3=new_tree(6);
  TREE* tr00_4=new_tree(7);
  TREE* tr0_1=join_tree(tr00_1,tr00_2,2);
  TREE* tr0_2=join_tree(tr00_3,tr00_4,3);
  TREE* tr0=join_tree(tr0_1,tr0_2,1);
  printf("%d\n\n",count_tree__nodes(tr0));
  printf("%d\n\n",count_tree__nodes2(tr0));
  print_tree_prefix(tr0);
  clean_tree(tr0);
}

static void test_all2(){
  TREE* tr00_1=new_tree(4);
  TREE* tr00_2=new_tree(5);
  TREE* tr00_3=new_tree(6);
  TREE* tr00_4=new_tree(7);
  TREE* tr0_1=join_tree(tr00_1,tr00_2,2);
  TREE* tr0_2=join_tree(tr00_3,tr00_4,3);
  TREE* tr0=join_tree(tr0_1,tr0_2,1);
  printf("%d\n\n",count_tree__nodes(tr0));
  printf("%d\n\n",count_tree__nodes2(tr0));
  print_tree_prefix(tr0);
  clean_tree2(tr0);
}


int main(){
  test_all();
  test_all2();
  return 0;
}
