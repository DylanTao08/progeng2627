#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, t, tmp;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "Enter t: ";
    std::cin >> t;
    for (int i = 0; i < n; i++){
        if (v.at(i) < t){
            std::cout << v.at(i) << std::endl;
        }
    }
}