#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int num, g, s, b, summ, scr;
    string c;
    vector<string>str;
    vector<int>gol;
    vector<int>sil;
    vector<int>bro;
    vector<int>sum;
    vector<int>score;
    cout << "Enter the number of countries: ";
    cin >> num;
    cout << "Enter country names: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> c;
        str.push_back(c);
    }

    sort(str.begin(), str.end()); // Сортировка стран

    cout << "Enter number of gold, silver and bronze medals: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << str[i] << ": ";
        cin >> g >> s >> b;
        gol.push_back(g); // Запись количества золотых медалей
        sil.push_back(s); // Запись количества серебряных медалей
        bro.push_back(b); // Запись количества бронзовых медалей
        sum.push_back(g + s + b); // Запись суммы всех медалей
        score.push_back(7 * g + 6 * s + 5 * b); // Запись счета
    }

    // Сортировка
    for (int i = 0; i < num - 1; i++)
    {
        for(int j = i + 1; j < num; j++)
        {
            if (gol[i] < gol[j])
            {
                // Сортировка стран
                string temp_str = str[i];
                str[i] = str[j];
                str[j] = temp_str;

                // Сортировка золотых медалей
                int temp = gol[i];
                gol[i] = gol[j];
                gol[j] = temp;
                // Сортировка серебрянных медалей
                temp = sil[i];
                sil[i] = sil[j];
                sil[j] = temp;
                // Сортировка бронзовых медалей
                temp = bro[i];
                bro[i] = bro[j];
                bro[j] = temp;
                // Сортировка суммы медалей
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;

                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    ofstream fout;
    fout.open("DZ_5_5.txt"); // Создаём файл
    for (int i = 0; i < num; i++) {
        fout << str[i] << " " << gol[i] << " " << sil[i] << " " << bro[i] << " " << sum[i] << " " << score[i];
        fout << endl;
    }
    fout.close();

    str.clear();
    gol.clear();
    sil.clear();
    bro.clear();
    sum.clear();
    score.clear();

    ifstream res("DZ_5_5.txt"); // Читаем файл
    for (int i = 0; i < num; i++)
    {
        res >> c >> g >> s >> b >> summ >> scr;
        str.push_back(c);
        gol.push_back(g);
        sil.push_back(s);
        bro.push_back(b);
        sum.push_back(summ);
        score.push_back(scr);
    }
    res.close();

    for (int i = 0; i < num; i++)
    {
        cout << str[i] << " " << gol[i] << " " << sil[i] << " " << bro[i] << " " << sum[i] << " " << score[i];
        cout << endl;
    }

    system("pause");
    return 0;
}