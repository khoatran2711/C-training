#include <iostream>
using namespace std;

void inf()
{
    int a;
    char fullname[100], sex[100];
    fflush(stdin);
    cout << "nhap ho ten: " << endl;
    gets(fullname);
    cout << "nhap ma sinh vien: " << endl;
    cin >> a;
    fflush(stdin);
    cout << "nhap gioi tinh: " << endl;
    gets(sex);

    cout << "thong tin cua ban: " << endl;
    cout << "msv: " << a << endl;
    cout << "fullname: " << fullname << endl;
    cout << "gioi tinh: " << sex << endl;
    cout << "Ket thuc chuong trinh!" << endl << endl;
}
void number()
{
    int a;
    cout << "nhap a: ";
    cin >> a;

    if (a % 7 == 0 && a % 3 == 0)
    {
        cout << a << "chia het cho 7 va 3" << endl;
    }
    if (a % 2==0)
    {
        cout << "day la so chan " << endl;
    }
    else
    {
        cout << "day la so le" << endl;
    }
    cout << "Ket thuc chuong trinh!" << endl<< endl;
}
void manag()
{
    string name[100];
    int weight[100];

    int a, b;
    int i, j;
    cout << "nhap so loai gao: ";
    cin >> a;
    cout << "nhap ten loai gao: " << endl;

    for (int i = 1; i <= a; i++)
    {
        cout << "ten loai " << i << " : ";
        // cin >> name[i];
        // fflush(stdin);
        scanf("%s", &name[i]);
        // fflush(stdin);
        cout << "khoi luong (kg): ";
        // cin >> weight[i];
        scanf("%d", &weight[i]);
        // cout << i << endl;
    }

    // cout << a << endl;
    cout << "so loai gao la : " << a << endl;
    int max = weight[1];

    int s = 0;
    for (int j = 1; j <= a; j++)
    {
        s += weight[j];
        if (weight[j] > max)
        {
            max = weight[j];
        }
    }

    cout << "so luong gao lon nhat la:" << max << endl;
    cout << "trung binh so luong gao: " << (float)s / a << endl;
    cout << "Ket thuc chuong trinh!" << endl<< endl;
}


int main()
{
    int i;
    do
    {
        cout << "Menu lua chon" << endl;
        cout << "1.thong tin sinh vien" << endl;
        cout << "2. so chia het cho 3 va 7" << endl;
        cout << "3.thong tin cua hang ban gao" << endl;
        cout << "0.thoat" << endl;
        cout << "chon chuong trinh: ";
        cin >> i;
        if (i == 0)
        {
            break;
        }
        switch (i)
        {
        case 1:
            inf();
            break;
        case 2:
            number();
            break;
        case 3:
            manag();
            break;     
        default:
            cout << "error";
            break;
        }

    } while (i < 4);
}
