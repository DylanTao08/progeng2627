#include <iostream>
int main(){
    int a, b, rem, quo = 0;
    std::cin >> a >> b;

    while (a >= b){
        a = a - b;
        quo = quo + 1;
        
    }

    rem = a;
    std::cout << "the quotient is " << quo << std::endl << "the remainder is " << rem << std::endl;
}