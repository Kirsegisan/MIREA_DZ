#include <iostream>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <string>


using namespace std; // 32 (Игорь)


int indexBIMBIMBAMABM(char symbol){ // Пренимает букву и говорит какая эта буква по счёту
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


char indexBIMBIMBAMABM(int number, int shift){ // Принимает номер со сдвигом и возвращает букву
    char Alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    if (number - shift == 26){ // Корректировка чтобы не вышел за пределы массива
        return ' ';
    }

    if (number > 25){
        number = number - 26;
    }
    if (number < 0){
        number = number + 26;
    }
    return Alphabet[number];
}


void DZ_5_3_2(){
    string output;
    ifstream text("text.txt"); // Читает файл
    getline(text, output);
    text.close();
    cout << "\n \n \n" << output << endl;
    int shift;
    cout << "Print shift: " << endl; // Сдвиг
    cin >> shift;
    string result; // Результат
    for (char ch : output) { // Вывод сдвига текста
        cout << indexBIMBIMBAMABM(indexBIMBIMBAMABM(ch) + shift, shift) << "";
    }
    cout << endl;
}