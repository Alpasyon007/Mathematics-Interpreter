#include <string>
#include <vector>

class Token {
    private:
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

        TokenType m_tokenType;

        const char m_period = '.';
        static constexpr int m_digits_ascii[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

    private:
        void GetNumType(std::string word);
    public:
        Token(std::string word);
        TokenType GetType() { return m_tokenType; }
};