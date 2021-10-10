#include "Token.h"
#include "../Debug/Debug.cpp"

//Create token and assign its type
Token::Token(std::string word) {
    switch(word[0]) {
        case (char)m_digits_ascii[0]:
        case (char)m_digits_ascii[1]:
        case (char)m_digits_ascii[2]:
        case (char)m_digits_ascii[3]:
        case (char)m_digits_ascii[4]:
        case (char)m_digits_ascii[5]:
        case (char)m_digits_ascii[6]:
        case (char)m_digits_ascii[7]:
        case (char)m_digits_ascii[8]:
        case (char)m_digits_ascii[9]:
            GetNumType(word);
            if(m_tokenType == INT) Out("INT");
            if(m_tokenType == FLOAT) Out("FLOAT");
            m_value = std::stof(word);
            break;
        case '+':
            m_tokenType = PLUS;
            Out("PLUS");
            break;
        case '-':
            m_tokenType = MINUS;
            Out("MINUS");
            break;
        case '*':
            m_tokenType = MULTIPLY;
            Out("MULTIPLY");
            break;
        case '/':
            m_tokenType = DIVIDE;
            Out("DIVIDE");
            break;
    } 
}

// Determine if number token is int or float
void Token::GetNumType(std::string word) {
    bool hitPeriod = false;

    for(char i : word) {
        for(int j : m_digits_ascii) {
            if( i == (char)j ) {
                //INT
                if(!hitPeriod) {
                    m_tokenType = INT;
                }
            } else if ( i == m_period ) {
                //FLOAT
                if(!hitPeriod) {
                    m_tokenType = FLOAT;
                    hitPeriod = true;
                }
            }
        }
    }
}