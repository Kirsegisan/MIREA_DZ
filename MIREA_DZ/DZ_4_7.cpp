#include <iostream>

using namespace std;

int S(int s, int m, int i, int c) {
    cout << s << endl;
    return S((m * s + 1 + i) % c, m, i, c);
}


void DZ_4_7(){
    int number;
    cout <<"\n" "\n" "select task:" << endl;
    cin >> number;
    switch(number){
        case 1:
            S(0, 37, 3, 64);
            break;
        case 2:
            S(0, 25173, 13849, 65537);
            break;
        default:
            break;
    }
}
