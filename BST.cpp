#include "BST.h"

BST::BST()
{
    root = NULL;
}

void BST::setHelper(Node *current, int value)
{
    if(value < current->data) {
    //Insert Left
    if(current->left == NULL)
      current->left = new Node(value);
    else
      insertHelper(current->left, value);
  }
  else {
    //Insert Right
    if(current->right == NULL)
      current->right = new Node(value);
    else
      insertHelper(current->right, value);
  }
}

BST::~BST()
{
    //dtor
}
