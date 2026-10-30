#include <iostream>
int smallest_factor(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return i;
        }
    }
    return 0;
}

int primes_in_range(int a, int b){
    for (;a<=b;a++){
        if (smallest_factor(a) == 0){
            std::cout << a << std::endl;
        }
    }


}

int main(){
    int a,b;
    std::cin >> a >> b;
    primes_in_range(a,b);


}
