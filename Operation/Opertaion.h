#pragma once

enum Operation {
    ADD = 0,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
}

struct Expression {
    Operation opertaion;
    expression lhs*;
    expression rhs*;
}

class OperationTree {
    private:
        void destroy_tree(Expression *leaf);
        void insert(int key, Expression *leaf);
        Expression *search(int key, Expression *leaf);
         
        Expression *root;

    public:
        OperationTree();
        ~OperationTree();
 
        void insert(int key);
        Expression *search(int key);
        void destroy_tree();
};