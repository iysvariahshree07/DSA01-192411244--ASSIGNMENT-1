#include <iostream>
#include <iomanip>
using namespace std;

class SmartCard {
private:
    long long balance; // Stored in paise

public:
    SmartCard(long long b) {
        balance = b;
    }

    void travel(int zone, int hour) {
        int fare;

        switch (zone) {
            case 1: fare = 1000; break;
            case 2: fare = 2000; break;
            case 3: fare = 3000; break;
            default:
                cout << "Invalid Zone" << endl;
                return;
        }

        if (hour < 0 || hour > 23) {
            cout << "Invalid Time" << endl;
            return;
        }

        if ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20)) {
            fare = fare * 120 / 100;
        }

        if (balance - fare >= 5000) {
            balance -= fare;
            cout << fixed << setprecision(2);
            cout << "Journey Allowed" << endl;
            cout << "Fare: Rs " << fare / 100.0 << endl;
            cout << "Balance: Rs " << balance / 100.0 << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main() {
    SmartCard card(10000);
    card.travel(2, 9);
    return 0;
}
