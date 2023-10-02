#include <iostream>
#include <math.h>

using namespace std;

void DZ_4_5() {

    int len = 30;
    char Schedule[len][20];
    int angle_y;
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 20; j++){
             Schedule[i][j] = '0';
        }
    }
    for (int x = 0; x < len; x++) {
        angle_y = (sin(x) + 1) * 10;
        Schedule[x][angle_y] = '*';
    }
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 20; j++){
            cout << Schedule[i][j];
        }
    }
}