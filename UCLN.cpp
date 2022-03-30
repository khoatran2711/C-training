#include <iostream>

#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout << "nhap gia tri cua a: ";
    cin >> a;
    cout << "nhap gia tri cua b : ";
    cin >> b;
    int max = 0;
    for (int i = 1; i <= a, i <= b; i++)
    {
        int x;
        if ((a % i == 0 && b % i == 0))
        {
            if (i > max)
            {
                max = i;
            }
            // max = i;
            // for (x = 0; x <= i; x++)
            // {
            // }
        }
    }
    cout << "UCLN la : " << max;
}
