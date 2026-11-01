#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main (){
    std::vector<int> v{2,3,9,5,3};
    std::cout << search_vector(3, v);
}
    