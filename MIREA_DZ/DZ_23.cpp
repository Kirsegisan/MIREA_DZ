
//
// Created by igord on 11.09.2023.
//
#include <iostream>
#include <cmath>
using namespace std;

int DZ_23(){

    double z,b,y,x;
    cout << "print b:";
    cin >> b;
    cout << "print y:";
    cin >> y;
    cout << "print x:";
    cin >> x;
    z = (log(b - y) * sqrt(b-x));
    cout <<"result:" << z;
    return 0;
}
