#include <iostream>
using namespace std;

class SmartCard {
private:
    int balance;

public:
    SmartCard(int b) {
        balance = b;
    }

    void travel(int fare) {
        if (balance - fare >= 5000) {
            balance -= fare;
            cout << "Journey Allowed" << endl;
            cout << "Balance: Rs " << balance / 100.0 << endl;
        } else {
            cout << "Journey Denied" << endl;
        }
    }
};

int main() {
    SmartCard card(10000);
    card.travel(3000);
    return 0;
}
