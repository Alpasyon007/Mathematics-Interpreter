#include <string>
#include <iostream>
#include "Token.h"
#include "../Debug/Debug.cpp"

Token::Token(std::string word) {
    bool hitPeriod = false;
    bool isInt = false;
    bool isFloat = false;

    for(char i : word) {
        Out(i);
        for(int j : m_digits_ascii) {
            if( i == (char)j ) {
                Out(j);
                //Is intiger
                isInt = true;
            } else if ( i == m_period ) {
                if(!hitPeriod) {
                    //Is float
                } else {
                    //Invalid (double period)
                    OutErr("Invalid (double period)");
                }
            } else {
                //Not a number
                OutErr("Not a number");
            } 
        }
    }
    
    Out(isInt);
}