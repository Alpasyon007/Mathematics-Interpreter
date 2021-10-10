#include "Operation.h"

OperationTree::OperationTree() {
  root = nullptr;
}

OperationTree::~OperationTree() {
  destroy_tree();
}

void OperationTree::destroy_tree() {
  destroy_tree(root);
}

void OperationTree::destroy_tree(Expression *leaf) {
    if(leaf != nullptr) {
        destroy_tree(leaf->lhs);
        destroy_tree(leaf->rhs);
        delete leaf;
    }
}

void OperationTree::insert(Operation key, Expression *leaf) {
    if(key < leaf->operation) {
        if(leaf->lhs != nullptr)
            insert(key, leaf->lhs);
        else {
            leaf->lhs = new Expression;
            leaf->lhs->operation = key;
            leaf->lhs->lhs = nullptr;    //Sets the left child of the child node to null
            leaf->lhs->rhs = nullptr;   //Sets the right child of the child node to null
        }  
    } else if(key >= leaf->operation) {
    if(leaf->rhs != nullptr) {
        insert(key, leaf->rhs);
    } else {
        leaf->rhs = new Expression;
        leaf->rhs->operation = key;
        leaf->rhs->lhs = nullptr;  //Sets the left child of the child node to null
        leaf->rhs->rhs = nullptr; //Sets the right child of the child node to null
    }
  }
}