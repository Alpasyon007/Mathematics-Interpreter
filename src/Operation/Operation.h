#pragma once

enum Operation {
    ADD = 0,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

struct Expression {
    Operation operation;
    Expression* lhs;
    Expression* rhs;
};

class OperationTree {
    private:
        void destroy_tree(Expression *leaf);
        void insert(Operation key, Expression *leaf);
        Expression *search(Operation key, Expression *leaf);
         
        Expression *root;

    public:
        OperationTree();
        ~OperationTree();
 
        void insert(Operation key);
        Expression *search(Operation key);
        void destroy_tree();
};