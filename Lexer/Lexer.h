#include <string>
#include <vector>
#include <sstream>
#include "Token/Token.h"

class Lexer {
    private:
        std::vector<Token> m_tokenVec;
    private:
        void ClearInput();
    public:
        Lexer();
        
        void Tokenise(std::string str);
        
        std::string GetInput();
};