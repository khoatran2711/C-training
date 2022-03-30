#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a,b,c;
  float delta;
  float x1,x2;
  cout << "Nhap gia tri a : ";
  scanf("%d",&a);
  cout << "Nhap gia tri b : ";
  scanf("%d",&b);
  cout << "Nhap gia tri c : ";
  scanf("%d",&c);
  delta = (b*b)- (4*a*c);
  if(delta > 0) {
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  
    
  } else if( delta = 0){
    x1 = x2 = ( -b / 2*a );
    cout << "x1 = x2 = " << x1;
  } else {
    cout << "Phuong trinh vo nghiem";
 
  } 
  return 0;


}