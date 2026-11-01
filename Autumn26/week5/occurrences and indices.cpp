#include <iostream>
#include <vector>
int main(){
    std::vector<int> v;
    int n, s, temp;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (int i =0; i < n; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp); 
    }

    std::cout << "Enter s: ";
    std::cin >> s;
    int count = 0;
    std::vector<int> indices;
    for (int i = 0; i < n; i++){
        if (v.at(i) == s){
            count = count + 1;
            indices.push_back(i);
        }
    }

    if (count > 0){
        std::cout << "there are " << count << " occurrencies of " << s << " at indices: " << std::endl;
        for (int i = 0; i < indices.size(); i++){
            std::cout << indices[i] << std::endl;
        }
    }
    else{
        std::cout << "there are no occurrences of " << s; 
    }
    
}