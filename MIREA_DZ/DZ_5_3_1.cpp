#include <iostream>


using namespace std;


int index(char symbol){
    char Alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int count = 0;
    for(char later : Alphabet){
        if (later == symbol){
            return count;
        }
        count++;
    }
    return 26;
}

void DZ_5_3_1(){
    string text;
    cout << "Enter text: " << endl;
    cin >> text;
    for (char ch : text){
        cout << bin()
    }
}