#include <iostream>
#include <math.h>

// #define PI 3.1415926535 // Способ задания Пи

using namespace std;

void DZ_4_5() {

    double pi = 3.1415926535; // Число Пи
    char Schedule[50][100]; // Пространство
    double angle_y;
    for (int i = 0; i < 50; i++){ // Заполнение Schedule
        for (int j = 0; j < 100; j++){ // Аналогино
            Schedule[i][j] = ' ';
        }
    }
    for (int x = 0; x < 100; x++) { // Рисует Синусоиду
        angle_y = (sin((pi / 24) * x) * 25) + 25;
        Schedule[(int)angle_y][x] = '*';
    }
    for (int i = 0; i < 50; i++){ // Выводит Синусоиду
        for (int j = 0; j < 100; j++){
            cout << Schedule[i][j];
        }
        cout << endl;
    }
}