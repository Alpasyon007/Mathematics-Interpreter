#pragma once

#include <string>
#include <vector>

class Token {
    private:
        // Token types
        enum TokenType {
            INVALID = 0,
            // NUMBER
            INT,
            FLOAT,
            // OPERATOR
            PLUS,
            MINUS,
            MULTIPLY,
            DIVIDE
        };

        // Token value
        float m_value;

        // Tokens type
        TokenType m_tokenType;

        // Constants
        static constexpr char m_period = '.';
        static constexpr int m_digits_ascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

    private:
        // Determine if number is int or float
        void GetNumType(std::string word);
    public:
        // Constructor
        Token(std::string word);

        // return
        float GetValue() { return m_value; }
        TokenType GetType() { return m_tokenType; }
};