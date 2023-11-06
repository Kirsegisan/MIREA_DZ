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
            if (i % j == 0) { // Проверка делимости хотя-бы на одно число
                flag = false; // Если хотя-бы одно число есть, то flag = 0
                break;
            }
        }
        if (flag) {
            cout << i << endl;
        }
    }
}
