#ifndef REVERSE_H
#define REVERSE_H
#include <string>
class Reverse{
    private:
        int rev = 0;
        int i=0;
        std::string newstr;
    
public:
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
    Reverse();
};
#endif