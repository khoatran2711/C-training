#include <iostream>
using namespace std;

int main(){
    //khai báo biến
    float a,b,c;
    // nhập dữ liệu
    printf ("nhap canh a : ");
    scanf ("%f",&a);
    printf ("nhap canh b : ");
    scanf ("%f",&b);
    printf ("nhap canh c : ");
    scanf ("%f",&c);
    //kiểm tra xem đủ đk thành tam giác
    if (a+b>c || a+c>b || b+c>a){
        // điều kiện tam giác vuông
        if(c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a + c*c){
            cout << "tam giac vuong";
        // điều kiện tam giác đều    
        } else if (a == b && a == c){    
            cout << "tam giac deu";
        // điều kiện tam giác cân
        } else if (a == b || a == c || b == c){
            cout << "tam giac can";
        } else {
            cout << "tam giac thuong";
        }
    } else {
        cout << "Khong phai tam giac";
    
    }


    
}