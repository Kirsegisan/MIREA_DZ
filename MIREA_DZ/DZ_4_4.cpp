#include <iostream>

using namespace std;


void LineStar(){
    for (int i = 0; i < 8; i++){
        cout << "* ";
    }
}


void LineRed(int len){
    for (int i = 0; i < len; i++){
        cout<< "==";
    }
}


void DZ_4_4(){
    cout << "\n \n";
    int len;
    for (int line = 0; line < 13; line++){
        len = 26;
        if (line < 6){
            LineStar();
            len -= 8;
        }
        if (line % 2 == 0){
            LineRed(len);
        }
        cout << "\n";
    }
}