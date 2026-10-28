#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 400 == 0){
        ly = true;
    }
    else if (year % 100 == 0){
        ly = false;
    }
    else if (year % 4 == 0){
        ly = true;
    }
    else{
        ly = false;
    }
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days;
    if (m1 == 2){
        if (leap_year(y1)){
            days = 29;
        }
        else{
            days = 28;
        }
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        days = 30;
    }
    
    else {
        days = 31;
    }


    if (d1 < days){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else {
        if (m1 == 12){
            y2 = y1 + 1;
            m2 = 1;
            d2 = 1;
       }
        else{
            y2 = y1;
            m2 = m1 + 1;
            d2 = 1;
        }
    }
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout << "Enter day, month and year: ";
    std::cin >> d1 >> m1 >> y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << "Next date is " << d2 << " " << m2 << " " << y2;
    // TODO: write a main to test the function
}