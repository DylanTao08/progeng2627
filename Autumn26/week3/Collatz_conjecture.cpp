#include <iostream>
int main (){
    int n, step = 0, curmax;
    std::cout << "enter a number ";
    std::cin >> n;
    curmax = n;
    while (n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }       

        if(curmax < n){
            curmax = n;
        }
        std::cout << n << "\t";
        step++;


}
    std::cout << std::endl;
    std::cout << "Total steps: " << step << std::endl;
    std::cout << "Maximum number: " << curmax << std::endl;
}