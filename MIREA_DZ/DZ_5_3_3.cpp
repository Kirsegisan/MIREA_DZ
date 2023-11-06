#include <iostream>
#include <string>

using namespace std; // 28

void DZ_5_3_3(){
    string text;
    cout << "\n \n Print text: " << endl;
    cin >> text;
    int textLen = text.size();
    char result[textLen];
    for (int i = 0; i < textLen; i++){
        result[i] = text[i];
    }
    for (char ch : result){
        cout << ch << " ";
    }
    cout << endl;
}