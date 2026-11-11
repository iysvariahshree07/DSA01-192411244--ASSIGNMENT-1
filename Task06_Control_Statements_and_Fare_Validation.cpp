#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int balance = 10000, zone, hour;
    int fare;

    for (int i = 1; i <= 3; i++) {
        cin >> zone >> hour;

        if (zone == 1) fare = 1000;
        else if (zone == 2) fare = 2000;
        else if (zone == 3) fare = 3000;
        else {
            cout << "Invalid zone" << endl;
            continue;
        }

        if (hour < 0 || hour > 23) {
            cout << "Invalid time" << endl;
            continue;
        }

        if ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20)) {
            fare = fare * 120 / 100;
        }

        if (balance - fare >= 5000) {
            balance -= fare;
            cout << fixed << setprecision(2);
            cout << "Fare Rs " << fare / 100.0
                 << " balance Rs " << balance / 100.0 << endl;
        } else {
            cout << fixed << setprecision(2);
            cout << "Denied (low balance) balance Rs "
                 << balance / 100.0 << endl;
        }
    }
    return 0;
}
