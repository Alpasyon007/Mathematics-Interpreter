#include <iostream>

template <typename T> void Out(T out) {

    std::cout << "\033[37m" << out << "\033[0m" << std::endl;
}

template <> void Out(bool out) {
    std::cout << "\033[37m" << (out ? "True" : "False") << "\033[0m" << std::endl;
}

template <typename T> void OutWarn(T out) {
    std::cout << "\033[33m" << out << "\033[0m" << std::endl;
}

template <typename T> void OutErr(T out) {
    std::cout << "\033[31m" << out << "\033[0m" << std::endl;
}

