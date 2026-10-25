#include <iostream>
#include <string>
int main(){
    int high, low, guess;
    std::string response;
    high = 100;
    low = 0;
    while (response != "yes"){
        guess = (high + low) / 2;
        std::cout << "is it " << guess << "?" << std::endl;
        std::cout << "type high, low or yes." << std::endl;
        std::cin >> response;
        if (response == "high"){
            high = guess - 1;
        }
        else if (response == "low"){
            low = guess + 1;
        }
    }
    std::cout << "I guess your number is " << guess;
}