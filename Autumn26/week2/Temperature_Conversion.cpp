#include <iostream>
int main(){
    double celcius, fahrenheit;
    std::cout << "Enter a Celcius degree" << std::endl;
    std::cin >> celcius;

    fahrenheit = celcius * 9 / 5 +32;
    std::cout << "Fahrenheit degree is " << fahrenheit << std::endl;
}