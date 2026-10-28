#include <iostream>

int max(int a, int b){
    int result;
    if (a >= b){
        result = a;
    }
    else{
        result = b;
    }
    return result;
}

int main(){
    std::cout << (max(3, 5) == 5) << std::endl;
    std::cout << (max(10, 7) == 10) << std::endl;
    std::cout << (max(1, 9) == 9) << std::endl;
    std::cout << (max(6, 6) == 6) << std::endl;
    std::cout << (max(-2, -1) == -1) << std::endl;
}