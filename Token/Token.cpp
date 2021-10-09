#include <string>
#include <iostream>
#include "Token.h"
#include "../Debug/Debug.cpp"

Token::Token(std::string word) {
    if(m_tokenType != INT || m_tokenType != FLOAT) {
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
                break;
            case '+':
                m_tokenType = PLUS;
                break;
            case '-':
                m_tokenType = MINUS;
                break;
            case '*':
                m_tokenType = MULTIPLY;
                break;
            case '/':
                m_tokenType = DIVIDE;
                break;
        } 
    }
}

void Token::GetNumType(std::string word) {
    bool hitPeriod = false;

    for(char i : word) {
        for(int j : m_digits_ascii) {
            if( i == (char)j ) {
                //Is intiger
                if(!hitPeriod) {
                    m_tokenType = INT;
                }
            } else if ( i == m_period ) {
                //Is float
                if(!hitPeriod) {
                    m_tokenType = FLOAT;
                    hitPeriod = true;
                }
            }
        }
    }
}