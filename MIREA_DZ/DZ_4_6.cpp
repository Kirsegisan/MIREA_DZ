#include <iostream>

using namespace std;



int Rome(char roman) {
    switch (roman) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int decodeRoman(string roman) {
    int result = 0;
    int prevValue = 0;

    for (int i = roman.length() - 1; i >= 0; i--) {
        char currentSymbol = roman[i];
        int currentValue = Rome(currentSymbol);

        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }

        prevValue = currentValue;
    }

    return result;
}

void DZ_4_6() {

    string romanNumeral;
    cout << "Enter Rome Number: ";
    cin >> romanNumeral;

    int arabicNumber = decodeRoman(romanNumeral);
    cout << "Arabic Number: " << arabicNumber << endl;

}