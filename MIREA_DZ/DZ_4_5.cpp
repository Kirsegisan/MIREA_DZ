#include <iostream>
#include <math.h>

using namespace std;

void DZ_4_5() {

    int len = 50;
    double pi = 3.1415926535;
    char Schedule[50][100];
    double angle_y;
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 100; j++){
             Schedule[i][j] = ' ';
        }
    }
    for (int x = 0; x < 100; x++) {
        angle_y = (sin((pi / 24) * x) * 25) + 25;
        Schedule[(int)angle_y][x] = '*';
    }
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 100; j++){
            cout << Schedule[i][j];
        }
        cout << endl;
    }
}
