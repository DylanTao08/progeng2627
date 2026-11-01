#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    double n, tmp;
    std::cout << "Enter the size of vector: ";
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}