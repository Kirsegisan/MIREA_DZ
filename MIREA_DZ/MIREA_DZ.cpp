#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>

using namespace std;

void DZ_1_1()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Привет Кира" << endl;
}



void DZ_1_2()
{
    int b;
    double c;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (b == 0)
    {
        cout << "an infinite number of solutions" << endl;
    }
    else if (c == 0)
    {
        cout << 0;
    }
    else
    {
        cout << c / b;
    }


}


void DZ_1_3()
{
    double a;
    double b;
    double c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        cout << "no solutions" << endl;
    }
    else if (discriminant == 0)
    {
        cout << b / 2 * a;
    }
    else
    {
        double angle = pow(discriminant, 0.5);
        cout << (b - angle) / 2 * a;
        cout << "\n";
        cout << (b + angle) / 2 * a;
    }
}


void DZ_1_4()
{
    setlocale(LC_ALL, "Russian");
    bool light = false;
    bool day = true;
    bool window = true;

    if (light or (day and window))
    {
        cout << "В комноте светло" << endl;
    }
    else
    {
        cout << "В комноте темно" << endl;
    }
}


void DZ_2_1()
{
    float pi = 3.141593;
    float h;
    cout << "h =" << endl;
    cin >> h;
    cout << "R =" << endl;
    float R;
    cin >> R;
    cout << "r =" << endl;
    float r;
    cin >> r;
    double x = (pow(R, 2) + r * R + pow(r, 2));
    cout << 1 / 3 * h * pi * x;
    cout << pi * x << endl;
}


void DZ_2_2() {

    double x, a, w;
    cout << "set X" << endl;
    cin >> x;
    cout << "set A" << endl;
    cin >> a;
    if (abs(x) < 1) {
        w = a * log(abs(a));
    }
    else {
        w = sqrt(a - pow(x, 2));
    }
    cout << "w = ";
    cout << w << endl;
}


void DZ_2_3() {

}


void DZ_Empty() {
    cout << "Task not found" << endl;
}


int main()
{
    void (*psl)() = DZ_Empty;
    int task, number;
    cout << "Select task" << endl;
    cin >> task;
    cout << "select task number" << endl;
    cin >> number;

    switch (task)
    {
    case 1:
        switch (number)
        {
        case 1:
            psl = DZ_1_1;
            break;
        case 2:
            psl = DZ_1_2;
            break;
        case 3:
            psl = DZ_1_3;
            break;
        case 4:
            psl = DZ_1_4;
            break;
        default:
            psl = DZ_Empty;
            break;
        }
        break;
    case 2:
        switch (number)
        {
        case 1:
            psl = DZ_2_1;
            break;
        case 2:
            psl = DZ_2_2;
            break;
        case 3:
            psl = DZ_2_3;
            break;
        default:
            psl = DZ_Empty;
            break;
        }
        break;
    default:
        psl = DZ_Empty;
        break;
    }

    system("cls");
    while (true)
    {
        psl();
        char a;
        cout << "press any button to continue" << endl;
        a = _getch();
        char m = 'm';
        if (a == m) {
            system("cls");
            main();
            break;
        }
        system("cls");
    }
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
