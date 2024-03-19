#include <iostream>
using namespace std;

int main() {
    int dog_age = 5;
    // This is my dogs age
    int early_years;
    int later_years;
    int human_years;
    string name;

    early_years = 21;
    // First 2 years of a dogs life counts as 21 human years

    later_years = (dog_age - 2) * 4;
    human_years = later_years + early_years;
    std::cout << "Type your name:";
    std::cin >> name;
    std::cout << "My name is " << name << "! My dog is " << human_years << " years old in human years.";
    return 0;

}