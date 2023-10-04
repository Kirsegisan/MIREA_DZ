#include <iostream>
#include <fstream>
#include <string>     // для std::getline
using namespace std;
void DZ_3_4()
{
    string output;
    ifstream fin("DZ_3_3.txt");
    ofstream file_content("DZ_3_3.txt");
    cin >> output;
     fin.close();
    for (char ch : output){
        if (isdigit(ch) == 1) {
            cout << ch;
        }
    }
    file_content << output;
    file_content.close();
    cout << "\n";
}


