#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "nhap N: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        s = s + i;
      
        if (i % 2 == 0)
        {
            cout << "so chan la : " << i << endl;
        } else {

        } cout << "tong =" << s << endl;
    }
    for (int i = 1; i < n; i++){
        if (i%3 == 0){
            cout << "so chia het cho 3 : " << i << endl;
        }
    }

}
