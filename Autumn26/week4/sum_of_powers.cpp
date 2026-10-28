#include <iostream>
#include <cmath>
int main(){
    int x, n, acc = 0;
    std::cin >> x >> n;
    for (int i = 1; i <= n; i++){
        acc = acc + std::pow(x,i);
    }
    std::cout << "sum =" << acc;
}