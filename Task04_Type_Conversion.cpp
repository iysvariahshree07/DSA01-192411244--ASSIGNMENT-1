#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;
    double x = a / b;
    double y = static_cast<double>(a) / b;

    cout << x << " " << y << endl;

    char ch = 'A' + 2;
    cout << ch << " " << (int)(ch + 1) << endl;

    bool flag = 5;
    cout << flag << " " << boolalpha << flag << endl;

    int s = -1;
    unsigned int u = 1;

    if (s >= u)
        cout << "s >= u" << endl;
    else
        cout << "s < u" << endl;

    return 0;
}
