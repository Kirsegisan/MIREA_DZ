#include <iostream>
using namespace std;

int RectangleS(int x, int y){
    return x * y;
}


int TriangleS(int h, int x){
    return x * h / 2;
}


double CircleS(int r){
    double pi = 3.1415926535897931;
    return 2 * pi * r;
}


void DZ_4_3(){
    int choose;
    cout << "\n \n 1 - Circle \n 2 - Triangle \n 3 - Rectangle \n";
    cout << "\n Select figure: \n";
    cin >> choose;
    switch (choose) {
        case 1:
            cout << "Print Radius:" << endl;
            int r;
            cin >> r;
            cout << CircleS(r) << endl;
            break;
        case 2:
            cout << "Print height:" << endl;
            int h;
            cin >> h;
            cout << "Print x:" << endl;
            int x;
            cin >> x;
            cout << TriangleS(h,x) << endl;
            break;
        case 3:
            cout << "Print x:" << endl;
            int X;
            cin >> X;
            cout << "Print y:" << endl;
            int Y;
            cin >> Y;
            cout << RectangleS(X,Y) << endl;
            break;
    }


}