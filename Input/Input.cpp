#include <iostream>
#include "Input.h"
#include "../Token/Token.h"

Input::Input() {}

std::string Input::GetInput() {
    std::string str;
    std::cin >> str;
    return str;
}

void Input::Tokenise(std::string str) {
    std::stringstream ss(str);

    std::string token;
    while (ss >> token) {
        m_strVec.push_back(token);
    }

    std::vector<Token> token_arr;

    for(std::string token : m_strVec) {
        Token temp(token);
        token_arr.push_back(temp);
    }

    for(Token i : token_arr) {
        std::cout << i.GetType() << std::endl;
    }
}

void Input::Print() {
    for(int i = 0; i < m_strVec.size(); i++) {
        std::cout << m_strVec[i] << std::endl;
    }
    ClearInput();
}

void Input::ClearInput() {
    m_strVec.clear();
}