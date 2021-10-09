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

    for(std::string token : m_strVec) {
        Token temp(token);
    }
}

void Input::Print() {
    for(int i = 0; i < m_strVec.size(); i++) {
        std::cout << m_strVec[i] << " ";
    }
    ClearInput();
}

void Input::ClearInput() {
    m_strVec.clear();
}