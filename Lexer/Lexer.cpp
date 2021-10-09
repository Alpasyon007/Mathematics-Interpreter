#include <iostream>
#include "Lexer.h"
#include "../Debug/Debug.cpp"

Lexer::Lexer() {}

std::string Lexer::GetInput() {
    std::string str;
    std::cin >> str;
    return str;
}

void Lexer::Tokenise(std::string str) {
    std::stringstream ss(str);
    std::string token;

    while (ss >> token) {
        Token temp(token);
        m_tokenVec.push_back(temp);
    }
}