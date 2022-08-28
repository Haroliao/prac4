#include "Reverse.h"
#include <string>
#include <iostream>
using namespace std;
int Reverse::reverseDigit(int value){
    
    if (value<0){
        return -1;
        }
    else{
        int lastdigit = value%10;
        rev = rev + lastdigit;
        while(value/10 != 0){
            rev = rev * 10;
            return reverseDigit(value/10);
        }
        
    }
    return rev;
}
string Reverse::reverseString(string letters){
    int strsize=letters.size();
    if (strsize==0){
        return newstr;
    }
    else{
       char rev = letters.back();
        newstr = newstr + rev;
        return reverseString((letters.substr(0,strsize-1)));

    }
    return newstr;

}
Reverse::Reverse(){

}