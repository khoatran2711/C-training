#include <iostream>
using namespace std;
int main()
{
    int i;

    do
    {
        cout << "1. ....." << endl;
        cout << "2. ....." << endl;
        cout << "3. ....." << endl;
        cout << "nhap gia tri i: ";
        cin >> i;

        if (i == 0)
        {
            cout << "ban da thoat";
            break;
        }
        switch (i)
        {
        case 1:

            break;
        case 2:
            break;
        case 3:
            break;

        default:
            break;
        }
    } while (i >=0 && i <=4);
}