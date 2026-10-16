#include <iostream>
#include <string>
int main(){
    std::string text;
    std::cin >> text;

    while (text != "STOP"){
        std::cout << text << std::endl;
        std::cin >> text;
    }
}