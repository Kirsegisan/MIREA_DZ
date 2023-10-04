#include <iostream>
#include <fstream>
using namespace std;

void DZ_4_1(){
    string numbers;
    ofstream fin("DZ_4_1.txt");
    cout << "Enter numbers:" << endl;
    cin >> numbers;
    fin << numbers;
    fin.close();
    ifstream file("DZ_4_1.txt");
    file >> numbers;
    int sum = 0;
    for ( char number : numbers){
        cout << number << endl;
        number = number - '0';
        sum += number;
    }
    cout << sum << endl;
}
