#include <iostream>
#include <cmath>
using namespace std;

void DZ_3_1(){
    double s,p,n,m,r;
    cout << "print s:";
    cin >> s;
    cout << "print p:";
    cin >> p;
    cout << "print n:";
    cin >> n;
    r = p / 100;
    m = ((s*r * (pow(1+r,n)) / (12 * ((pow(1+r,n) - 1)))));
    cout << "result:" << m << ".\n";
}

int DZ31(){
    DZ_3_1();
    return 0;
}