#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>


using namespace std; // 8, 9 (Кира).


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
    string result;
    cout << "\n \n" "Enter text: " << endl;
    cin >> text;
    for (char ch : text) {
        result = "";
        int number = index(ch);
        if (number == 26){
            result = "   ";
        } else {

            while (number > 0) {
                if (number % 2 == 0) {
                    result = "0" + result;
                } else {
                    result = "1" + result;
                }
                number = number / 2;

            }
        }
//        cout << result << " ";
        cout << result << "\n";
    }
    cout << endl;
}