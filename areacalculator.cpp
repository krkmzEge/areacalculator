#include <iostream>

int main(){

    int base;
    int height;
    int area;

    std::cout << "Welcome to the application of finding the triangle area formula.....\n";
    std::cout << "Please enter the values:...\n";
    std::cout << "Base:";
    std::cin >> base;
    std::cout << "Height:";
    std::cin >> height;

    area = (base * height) / 2;

    std::cout << "The area is " << area << " .\n";



}
