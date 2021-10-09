#include <string>
#include <vector>
#include <sstream>

class Input {
    private:
        std::vector<std::string> m_strVec;
    private:
        void ClearInput();
    public:
        Input();
        std::string GetInput();
        void Tokenise(std::string str);
        void Print();
};