#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "nhap nam";
    cin >> a;
    cout << "nhap thang";
    cin >> b;
    // Điều kiện tháng có 31 ngày
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
    {
        cout << "co 31 ngay";
    }
    // Điều kiện tháng 30 ngày
    else if (b == 4 || b == 6 || b == 9 || b == 11)
    {
        cout << "co 30 ngay";
    }
    // Tháng 2
    else if (b == 2)
    {
        // Tháng 2 năm nhuận
        if ((a % 400 == 0 || a % 4 == 0) && a % 100 != 0)
        {
            cout << "co 29 ngay";
        }
        // Tháng 2 năm khum nhuận
        else
        {
            cout << "co 28 ngay";
        }
    }
}