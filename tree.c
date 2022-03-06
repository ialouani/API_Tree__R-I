#include "./tree.h"
#include<stdio.h>
#include<stdlib.h>


struct tree *new_tree(int x){
  struct tree* t=(struct tree*)malloc(sizeof(*t));
  t->value=x;
  t->left=NULL;
  t->right=NULL;
  t->parent=NULL;
  return t;
}

struct tree *join_tree(TREE *left, TREE* right, int node){
  struct tree* tr=new_tree(node);
  tr->left=left;
  tr->right=right;
  left->parent=tr;
  right->parent=tr;
  return tr;
}


void clean_tree(TREE* tr){
  //se fera recursivement car la nature meme de l'arbre en structure
  //a fait cache cela mais pas trop via les fonctions precedentes.
  if(tr->left==NULL && tr->right==NULL){
    free(tr);
    return;
  }
  else{
  clean_tree(tr->left);
  clean_tree(tr->right);//ET APRES: un clean pour tr(faire un schema
  //pour un node instancie et une racine avec 2 elements et 4 sentinelles
  //STRUCTUREES AT_ALL++./////
  free(tr);
  }
}

void clean_tree2(TREE* tr){
  //autre maniere
  //appel puis commande de free resultant du 1er test non PASSE.
  if(tr==NULL) return;
  clean_tree2(tr->left);
  clean_tree2(tr->right);
  free(tr);
  //pas tres precis, mais tient la route bien sur!
}

void print_tree_prefix(TREE* tr){
  //correspond a l'expression prefixe d'un modele~ d'arbre().
  //c'est UN parcours en profondeur via une ecriture non iterative
  //DE SIMPLIFICATION..///
  void print_tree_Rprofondeur(TREE* t){
  if(t==NULL) return;
  else{//tr!=NULL=>pas une sentinelle=>au moins un node racine minimaliste
    //relie a 2 sentinelles.
    printf("%d\t",t->value);
    print_tree_prefix(t->left);
    print_tree_prefix(t->right);
  }
  }
  print_tree_Rprofondeur(tr);
  //par l'affichage, on decouvre la mauvaise pratique de declarer
  //une sous-fonction LOCALE a une autre l'utilisant implicitement
  //par des appels tests...
  printf("\n");
}

int count_tree__nodes(TREE* t){
  if(t->left==NULL && t->right==NULL) return 1;
  else return 1+count_tree__nodes(t->left)+count_tree__nodes(t->right);
}

int count_tree__nodes2(TREE* t){
  if(t==NULL) return 0;
  return 1+count_tree__nodes2(t->left)+count_tree__nodes2(t->right);
}

