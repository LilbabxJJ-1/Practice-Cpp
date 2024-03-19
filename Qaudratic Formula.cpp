#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double a;
    double b;
    double c;
    std::cout << "Enter value for a:\n";
    std::cin >> a;

    std::cout << "Enter value for b:\n";
    std::cin >> b;

    std::cout << "Enter value for c:\n";
    std::cin >> c;

    double root1;
    double root2;

    root1 = (-b + std::sqrt((pow(b,  2)) - (4 * (a * c)))) / (2 * a);
    root2 = (-b - std::sqrt((pow(b,  2)) - (4 * (a * c)))) / (2 * a);

    std::cout << "Root 1: " << root1 << "\nRoot 2: " << root2;



}