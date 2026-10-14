#include <iostream>
#include <string>

int main(){
    double temp_in,temp_out;
    std::string unit_in, unit_out;

    std::cin >> temp_in >> unit_in;

    if (unit_in == "C"){
        temp_out = temp_in * 9 / 5 +32;
        unit_out = "F";
    }

    else{
        temp_out = ( temp_in - 32 ) * 5 / 9;
        unit_out = "C";
    }

    std::cout << temp_out << " " << unit_out;

    


}