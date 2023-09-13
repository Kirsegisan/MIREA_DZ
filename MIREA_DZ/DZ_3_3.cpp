#include <iostream>
#include <fstream>
#include <string>     // для std::getline
using namespace std;
void DZ_3_3()
{
    string text;

    ifstream in("DZ_3_3.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, text))
        {
            cout << text << endl;
        }
    }
    in.close();     // закрываем файл
}

int DZ33(){
    DZ_3_3();
    return 0;
}