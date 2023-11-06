#include <iostream>
#include "DZ_4_9.h"
#include <vector>

using namespace std;

void DZ_5_4(){
    int choose;
    cout << "Choose task: " << endl;
    cin >> choose;
    int in;
    int to;
    switch (choose){
        case 1:
            in = 2;
            to = 4;
            break;
        case 2:
            in = 2;
            to = 3;
            break;
        case 3:
            in = 2;
            to = 5;
            break;
        case 4:
            in = 3;
            to = 6;
            break;
        case 5:
            in = 7;
            to = 3;
            break;
        case 6:
            in = 5;
            to = 2;
            break;

    }
    bool flag = true;
    string input;
    vector<string> F;
    while (flag){
        cin >> input;
        if (input == "end"){
            break;
        }
        F.push_back(input);
        for (int i = 0; i < F.size(); i++){
            cout << F[i] << endl;
        }

    }
    for (string str : F){
        cout << inAnythingtoAnything(in, to, str) << endl;
    }
}