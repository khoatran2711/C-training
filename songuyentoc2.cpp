#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; // nhap n
    cout << "Nhap so N: ";
    cin >> n;
    for (int a = 2; a < n; a++) // vong lap de tao ra so chay tu 2 den n goi la tao hop so a
    {
        int c = 0;
        for (int i = 2; i < a; i++) // kiem tra a co phai la so nguyen to khong
          {
            if (a % i == 0) // a chia het cho so i thi a khong phai la so nguyen C thêm 1 đơn vị
            {
                c++;
                break;
            }
        }
        if (c == 0)
        { // nếu c vẫn bằng 0 thì a là số nguyên tố
            cout << "so nguyen to la :" << a << endl;
        }
    } 
}
