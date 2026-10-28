#include <iostream>
int max(int a, int b, int c){
    int result = a;
    if (b > result){
        result = b;
    }
    if (c > result){
        result = c;
    }
    return result;
}
    
int main(){
    std::cout << (max(3, 5, 2) == 5) << std::endl;
    std::cout << (max(10, 4, 7) == 10) << std::endl;
    std::cout << (max(1, 2, 9) == 9) << std::endl;
    std::cout << (max(6, 6, 3) == 6) << std::endl;
    std::cout << (max(-2, -5, -1) == -1) << std::endl;
    std::cout << (max(4, 4, 4) == 4) << std::endl;

}

   