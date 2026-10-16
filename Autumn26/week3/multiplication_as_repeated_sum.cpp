#include <iostream>
int main(){
    int x, n, counter = 0, acc = 0;
    std::cin >> x >> n;
    while(counter < n){
        counter = counter +1;
        acc = acc + x;

    }
    
    std::cout << x << "*" << n << "=" << acc << std::endl;


}