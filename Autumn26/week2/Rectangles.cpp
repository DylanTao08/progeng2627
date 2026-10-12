#include <iostream>
int main(){
    double length, width, perimeter, area;
    std::cout << "Enetr the length of the rectangle" << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle" << std::endl;
    std::cin >> width;

    perimeter = 2 * (length + width);
    area = length * width;
    
    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
    std::cout << "The area of the rectangle is " << area << std::endl;
}
