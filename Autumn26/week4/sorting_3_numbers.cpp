#include <iostream>

void myswap(double& a,double& b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_three_numbers(double& s1,double& s2,double& s3){
    if (s1 > s2){
        myswap(s1,s2);
    }
    if (s2 > s3){
        myswap(s2,s3);
    }
    if (s1>s2){
        myswap(s1,s2);
    }
}

int main(){
    double a,b,c;
    std::cout << "enter 3 numebrs: ";
    std::cin >> a >> b >> c;
    sort_three_numbers(a,b,c);
    std::cout << a << " " << b << " " << c;
}