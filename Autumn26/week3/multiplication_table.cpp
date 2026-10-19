#include <iostream>
int main (){
    int n;
    std::cin >> n;
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
             std::cout << row * col << "\t";
        }
        std::cout << std::endl;

    }
}