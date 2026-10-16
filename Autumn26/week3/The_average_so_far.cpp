#include <iostream>
int main(){
    double n, mean, acc = 0, counter = 0;
    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while (n != 0){
        acc = acc + n;
        counter = counter + 1;
        mean = acc / counter;
        std::cout << "the average so far is: " << mean << std::endl;
        std::cout << "enter a number : "<< std::endl;
        std::cin >> n;
    }
}