#include <iostream>

using namespace std;

void DZ_4_8() {
    float A[3][4]{{5,  2, 0, 10},
                  {3,  5, 2, 5},
                  {20, 0, 0, 0}};

    float B[4][2]{{1.2, 0.5},
                  {2.8, 0.4},
                  {5,   1},
                  {2,   1.5}};

    float C[3][2]{{0, 0},
                  {0, 0},
                  {0, 0}};
    cout << "\n \n";
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 2; col++) {
            for (int res = 0; res < 4; res++) {
                C[row][col] += A[row][res] * B[res][col];
            }
        }
    }

    float sumMax = 0, sumMin = 38;
    float comMax = 0, comMin = 19;
    float sumMoney = 0, sumCom = 0;
    float sum = 0;
    for (int i = 0; i < 3; i++){
        sumMoney += C[i][0];
        sumCom += C[i][1];
        sumMax = max(sumMax, C[i][0]);
        sumMin = min(sumMin, C[i][0]);
        comMax = max(comMax, C[i][1]);
        comMin = min(comMin, C[i][1]);
    }

// Затем выведите матрицу C
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 2; col++) {
            cout << C[row][col] << " ";
        }
        cout << "\n";
    }
    cout << "sumMax: " << sumMax << endl;
    cout << "sumMin: " << sumMin << endl;
    cout << "comMax: " << comMax << endl;
    cout << "comMin: " << comMin << endl;
    cout << "sumMoney: " << sumMoney << endl;
    cout << "sumCom: " << sumCom << endl;
    cout << "sum: " << sumMoney + sumCom << endl;
}