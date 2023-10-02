#include <iostream>
using namespace std;

int check(int number){
    if (number == 0){
        return 0;
    }
    if (number > 0){
        return 1;
    }
    return -1;
}


void DZ_4_2(){
    int number;
    cout << "Enter number:" << endl;
    cin >> number;
    cout << check(number) << endl;

}
