#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void DZ_3_3()
{
    string output;
    ifstream fin("DZ_3_3.txt");
    ofstream file_content("DZ_3_3.txt");
    cin >> output;
    file_content << output;
    fin.close();
    file_content.close();
}

int DZ33(){
    DZ_3_3();
    return 0;
}