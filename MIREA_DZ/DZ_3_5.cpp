#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>     // для std::getline
using namespace std;
void DZ_3_5()
{
    string output;
    string alphabet;
    ifstream fin("DZ_3_3.txt");
    ofstream file_content("DZ_3_3.txt");
    cin >> output;
    file_content << output;
    fin.close();
    file_content.close();
    for (char ch : output){
        if (isdigit(ch) == 0)
            alphabet.push_back(ch);
    }
    sort(alphabet.begin(), alphabet.end());
    cout << alphabet << "\n";
}


