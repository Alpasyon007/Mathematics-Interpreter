#include "Lexer/Lexer.h"

int main() {
    Lexer Lexer;

    while(true) {
        Lexer.Tokenise(Lexer.GetInput());
    } 
}