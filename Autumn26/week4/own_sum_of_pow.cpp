#include <iostream>

double mypow (double base,int exp){
    double result = 1;
    for (int i = 1; i <= exp; i++){
        result = result * base;
    }
    return result;
}

int main(){
    int x, n, acc = 0;
    std::cin >> x >> n;
    for (int i = 1; i <= n; i++){
        acc = acc + mypow(x,i);

    }
    std::cout << acc;
}
