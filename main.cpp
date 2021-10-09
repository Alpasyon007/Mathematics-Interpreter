#include "Input/Input.h"

int main() {
    Input In;

    while(true) {
        In.Tokenise(In.GetInput());
        In.Print();
    } 
}