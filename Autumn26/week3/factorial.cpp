#include <iostream>
int main(){
    int n, acc = 1;
    std::cin >> n;

    for (int i = n; i > 0; i--){
        acc = acc * n;
        n = n - 1;
    }
    std::cout << acc;
}