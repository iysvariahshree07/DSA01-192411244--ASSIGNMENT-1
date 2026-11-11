#include <iostream>
#include <iomanip>
using namespace std;

class Metro {
public:
    int calculateFare(int zone, int hour, bool weekend) {
        int fares[] = {1000, 2000, 3000, 6000};

        if (zone < 1 || zone > 4 || hour < 0 || hour > 23)
            return -1;

        int fare = fares[zone - 1];

        // Weekend discount and peak surcharge do not combine.
        if (weekend) {
            fare = fare * 90 / 100;
        } else if ((hour >= 8 && hour < 10) ||
                   (hour >= 17 && hour < 20)) {
            fare = fare * 120 / 100;
        }

        return fare;
    }
};

class MonthlyPass {
public:
    int zone1, zone2;

    MonthlyPass(int a, int b) {
        zone1 = a;
        zone2 = b;
    }

    bool covers(int zone) {
        return zone == zone1 || zone == zone2;
    }
};

int main() {
    Metro metro;
    MonthlyPass pass(1, 2);

    int zone = 4;
    int hour = 9;
    bool weekend = false;

    if (pass.covers(zone)) {
        cout << "Monthly Pass - Free Travel" << endl;
    } else {
        int fare = metro.calculateFare(zone, hour, weekend);

        if (fare == -1) {
            cout << "Invalid Journey" << endl;
        } else {
            cout << fixed << setprecision(2);
            cout << "Fare: Rs " << fare / 100.0 << endl;
        }
    }
    return 0;
}
