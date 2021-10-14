#include <iostream>
#include "Lexer.h"
#include "../Debug/Debug.cpp"

Lexer::Lexer() {}

// Get input from iostream cin
std::string Lexer::GetInput() {
    std::string str;
    std::cin >> str;
    return str;
}

//Convert input string into a vector of tokens
void Lexer::Tokenise(std::string str) {
    std::stringstream ss(str);
    std::string token;

    while (ss >> token) {
        Token temp(token);
        m_tokenVec.push_back(temp);
    }
}

//Return token vector
std::vector<Token> Lexer::ReturnTokenVec() {
    return m_tokenVec;
}