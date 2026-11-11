#include <iostream>
using namespace std;

int balance = 10000;

int main() {
    int zone = 3;
    int fare = zone * 1000;

    if (balance - fare >= 5000) {
        balance -= fare;
        cout << "Journey Allowed" << endl;
        cout << "Balance: Rs " << balance / 100.0 << endl;
    } else {
        cout << "Journey Denied" << endl;
    }
    return 0;
}
