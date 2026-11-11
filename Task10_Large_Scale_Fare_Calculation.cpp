#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long journeys[] = {20000, 500000, 3000000};
    long long fare = 3600; // Assumed fare per journey: Rs 36.00

    for (int i = 0; i < 3; i++) {
        long long total = journeys[i] * fare;

        cout << "Journeys: " << journeys[i] << endl;
        cout << fixed << setprecision(2);
        cout << "Total Collection: Rs "
             << total / 100.0 << endl << endl;
    }
    return 0;
}
