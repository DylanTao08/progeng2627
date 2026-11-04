#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin, vout;
    double t, n, tmp;
    std::cout << "Enter the size of vector: " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> tmp;
        vin.push_back(tmp);
    }
    std::cout << "Enter the filtering number: " << std::endl;
    std::cin >> t;
    filter_v(vin, t, vout);
    for (int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
}