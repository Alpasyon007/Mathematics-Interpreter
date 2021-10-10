#pragma once

#include <string>
#include <vector>
#include <sstream>
#include "../Token/Token.h"

class Lexer {
    private:
        std::vector<Token> m_tokenVec;
    private:
    public:
        //Constructor
        Lexer();
        
        //Operations
        std::string GetInput();
        void Tokenise(std::string str);
        
        //Returns
        std::vector<Token> ReturnTokenVec();
};