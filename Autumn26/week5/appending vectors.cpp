#include <iostream>
#include <vector>
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){    
    for (int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main (){
    std::vector<int> v1, v2, vout;
    int n1, n2, tmp;
    std::cout << "Enter size of v1: " << std::endl;
    std::cin >> n1;
    for (int i = 0; i < n1; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> tmp;
        v1.push_back(tmp);
    }
    std::cout << "Enter size of v2: " << std::endl;
    std::cin >> n2;
    for (int i = 0; i < n2; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> tmp;
        v2.push_back(tmp);
    }
    append_vectors(v1, v2, vout);
    for (int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }

}