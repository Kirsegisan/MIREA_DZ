#include <iostream>


using namespace std;

void DZ_5_2(){
    int lastNumber;
    cout << "\n \n lastNumber - " << endl;
    cin >> lastNumber;
    bool flag;
    for (int i = lastNumber; i > 1; --i){
        flag = true;
        for (int j = pow(i, 0.5); j > 1; --j) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i << endl;
        }
    }
}
