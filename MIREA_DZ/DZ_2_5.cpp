#include <iostream>
#include <cmath>
using namespace std;

void DZ_2_5(){
double x,y,step;
x = -4;
y = 5;
step = 0.5;
while (x <= 4){
    y = ((x*x - 2*x + 2) / (x - 1) );
    cout << "y = " << y << ", x = " << x <<".\n";
    x = x + step;
}
}

int DZ25() {
    DZ_2_5();
    return 0;
}