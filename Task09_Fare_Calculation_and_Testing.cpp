#include <iostream>
#include <iomanip>
using namespace std;

int calculateFare(int zone, int hour) {
    int fare;

    if (zone == 1) fare = 1000;
    else if (zone == 2) fare = 2000;
    else if (zone == 3) fare = 3000;
    else return -1;

    if (hour < 0 || hour > 23) return -1;

    if ((hour >= 8 && hour < 10) ||
        (hour >= 17 && hour < 20)) {
        fare = fare * 120 / 100;
    }
    return fare;
}

int main() {
    int zone, hour, total = 0;

    for (int i = 1; i <= 5; i++) {
        cin >> zone >> hour;
        int fare = calculateFare(zone, hour);

        if (fare == -1) {
            cout << "Invalid journey" << endl;
        } else {
            cout << fixed << setprecision(2);
            cout << "Journey " << i << ": Rs "
                 << fare / 100.0 << endl;
            total += fare;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Total Fare: Rs " << total / 100.0 << endl;
    return 0;
}
