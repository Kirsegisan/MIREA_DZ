
#include <iostream>
#include <cmath>
using namespace std;
void DZ_2_3() {
    double z, b, y, x;
    cout << "print b:";
    cin >> b;
    cout << "print y:";
    cin >> y;
    cout << "print x:";
    cin >> x;
    z = (log(b - y) * sqrt(b - x));
    cout << "result:" << z << ".\n";
}
int DZ23() {
    DZ_2_3();
    return 0;
}
