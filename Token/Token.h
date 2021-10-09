#include <string>
#include <vector>

class Token {
    private:
        const char m_period = '.';
        const std::vector<int> m_digits_ascii = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

        enum TokenType {
            NUMBER = 0
        };
    private:
    public:
        Token(std::string word);
};