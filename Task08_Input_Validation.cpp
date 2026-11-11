#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    int zone;
    double fare;

    cout << "Enter zone (1-3): ";

    while (!(cin >> zone) || zone < 1 || zone > 3) {
        cout << "Invalid input! Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter fare: ";
    while (!(cin >> fare) || fare < 0) {
        cout << "Invalid fare! Enter again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << fixed << setprecision(2);
    cout << "Fare: Rs " << fare << endl;
    return 0;
}
