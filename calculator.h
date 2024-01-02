#include <cstring>

class Calculator
{
private:
    bool errorFlag;
    std::string errorMessage;
public:
    Calculator();
    double Calculate(double x, char oper, double y);
    bool hasError() const;
    std::string getErrorMessage() const;
};
