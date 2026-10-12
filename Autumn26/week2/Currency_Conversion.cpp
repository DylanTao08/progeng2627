#include <iostream>
int main(){
    double pounds, rate, euro;
    std::cout << "Enter the amount of pounds: " << std::endl;
    std::cin >> pounds;

    std::cout << "Enter the current exchange rate to Euros: " << std::endl;
    std::cin >> rate;

    euro = pounds * rate;
    std::cout << "Equivalent amount in Euros is " << euro << std::endl;

    

}