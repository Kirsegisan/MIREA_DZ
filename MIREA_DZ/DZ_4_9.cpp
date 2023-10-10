#include <iostream>


using namespace std;

int toint(char x){
    switch (x){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
        case 'G': return 16;

    }
}


void DZ_4_9(){
    string x;
    int in;
    int to;
    int j;
    int angle_x = 0;
    cout << "print number: ";
    cin >> x;
    cout << "print in: ";
    cin >> in;
    cout << "print to: ";
    cin >> to;
    j = size(x);
    for(int i = 0; i < j; i++){
        angle_x += toint(x[j - 1 - i]);
    }
    int result = angle_x;
    if (to < 10){
        result = 0;
        while(angle_x > 0){
            result += angle_x / to;
            angle_x = angle_x % to;
        }

    }
    cout << "result: " << angle_x << endl;
}