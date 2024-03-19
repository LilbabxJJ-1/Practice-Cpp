#include <iostream>
using std::cout;
using std::cin;


int main(){
    int year;
    cout << "What year is it?\n";
    cin >> year;

    if (year % 4 == 0){
        if (year % 100 != 0 || year % 400 == 0){
            cout << year << " is a leap year";

        } else {
            cout << year << " is not a leap year";
        }
    } else {
        cout << year << " is not a leap year";

    }
    return 0;
}