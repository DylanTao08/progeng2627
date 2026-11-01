#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int min_index = 0;
    for (int i = 1; i < vin.size(); i++){
        if (vin[i] < vin[min_index]){
            min_index = i;
        }
    }
    return min_index;
}

int main(){
    std::vector<double> v{5, 8, -2, 7};

    std::cout << min_vector_element(v) << std::endl;
}

