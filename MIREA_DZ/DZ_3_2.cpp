#include <iostream>
#include <cmath>
using namespace std;

void DZ_3_2() {
    double s, p, n, m, r, angle_m;
    angle_m = 0;
    p = 100;
    cout << "print s:";
    cin >> s;
    cout << "print m:";
    cin >> m;
    cout << "print n:";
    cin >> n;
    while (m - angle_m > 0.1) {
        p--;
        r = p / 100;
        angle_m = ((s * r * (pow(1 + r, n)) / (12 * ((pow(1 + r, n) - 1)))));
        cout << m - angle_m << ".\n";
    }
    cout << "result: " << p << ".\n";
}

int DZ32() {
    DZ_3_2();
    return 0;
}
