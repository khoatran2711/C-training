#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "nhap nam";
    cin >> a ;
    if ((a%400 == 0 || a%4 == 0) && a%100 != 0){
        cout << "nam nhuan";

    }else {
        cout << "khong phai nam nhuan";
    }
}
