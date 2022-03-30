#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int a,b,c;
    cout << "nhap a " << endl;
    cin >> a;
    cout << "nhap b" << endl;
    cin >> b;
    cout << "nhap c" << endl;
    cin >> c;
    if(a > b && a > c){
        cout << "so lon nhat la : " << a ;

    } else if (b > a && b > c){
        cout << "so lon nhat la: " << b ;

    } else {
        cout << "so lon nhat la " << c;
    }


}