#include <iostream>
#include <string>

void swap_text(std::string& a,std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    std::string a,b;
    std::cout << "Enter 2 texts: ";
    std::cin >> a >> b;

    swap_text(a,b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

}