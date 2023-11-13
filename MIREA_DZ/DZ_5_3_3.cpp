#include <iostream>
#include <string>


using namespace std; // 28

void DZ_5_3_3(){
    string text;
    cout << "\n \n Print text: " << endl;
    cin >> text;
    int textLen = text.size(); // Находит длинну введённого текста
    char result[textLen]; // Создаёт массив разамером с текс
    for (int i = 0; i < textLen; i++){ // Посимвольная запись текста в массив
        result[i] = text[i];
    }
    for (char ch : result){ // Ввывод массива
        cout << ch << " ";
    }
    cout << endl;
}