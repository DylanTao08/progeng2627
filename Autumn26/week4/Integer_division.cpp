#include <iostream>
void integer_division(int a,int b,int& quo,int& rem){
    quo = a / b;
    rem = a % b;
}

int main(){
    int a, b, quo, rem;
    std::cout << "Enter 2 numbers: ";
    std::cin >> a >> b;
    integer_division(a,b,quo,rem);
    std::cout << "Quotient is " << quo << std::endl;
    std::cout << "Remainder is " << rem;
}