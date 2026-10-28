#include<iostream>
double mypow (double base,int exp){
    double result = 1;
    for (int i = 1; i <= exp; i++){
        result = result * base;
    }
    return result;
}
double sum_of_powers(double x, int n){
    double acc = 0;

    for(int i = 1; i <= n; i++){
        acc = acc + mypow(x, i);
    }
    return acc;
}

int main(){

    std::cout << (sum_of_powers(2, 3) == 14) << std::endl;
    std::cout << (sum_of_powers(3, 2) == 12) << std::endl;
    std::cout << (sum_of_powers(1, 5) == 5) << std::endl;
    std::cout << (sum_of_powers(5, 1) == 5) << std::endl;
    std::cout << (sum_of_powers(2, 0) == 0) << std::endl;
    std::cout << (sum_of_powers(-2, 3) == -6) << std::endl;

}