#include <iostream>


using namespace std;

int divison(int firstNumber, int secondNumber){ // НОД Делением
    while (firstNumber != 0 and secondNumber != 0){
        if(firstNumber > secondNumber){
            firstNumber = firstNumber % secondNumber;
        }
        else{
            secondNumber = secondNumber % firstNumber;
        }
    }
    return firstNumber + secondNumber;
}

int subtruction(int firstNumber, int secondNumber){ // НОД Вычитанием
    while (firstNumber != 0 and secondNumber != 0){
        if(firstNumber > secondNumber){
            firstNumber = firstNumber - secondNumber;
        }
        else{
            secondNumber = secondNumber - firstNumber;
        }
    }
    return firstNumber + secondNumber;
}


void DZ_5_1(){
    int firstNumber;
    cout <<"\n \n" "Enter first number: " << endl; // Вводим первое число
    cin >> firstNumber;
    int secondNumber;
    cout << "Enter second number: " << endl; // Вводим второе число
    cin >> secondNumber;
    int number;
    cout << "\n 1. Division \n 2.subtruction " << endl; // Выбор способа
    cout << "Select method: " << endl;
    cin >> number;
    switch(number){
        case 1:
            cout << divison(firstNumber, secondNumber) << endl;
            break;
        case 2:
            cout << subtruction(firstNumber, secondNumber) << endl;
            break;
    }
}