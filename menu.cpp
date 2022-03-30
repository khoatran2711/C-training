#include <iostream>
using namespace std;
void checktriangle()
{
    float a, b, c;
    // nhập dữ liệu
    printf("nhap canh a : ");
    scanf("%f", &a);
    printf("nhap canh b : ");
    scanf("%f", &b);
    printf("nhap canh c : ");
    scanf("%f", &c);
    // kiểm tra xem đủ đk thành tam giác
    if (a + b > c || a + c > b || b + c > a)
    {
        // điều kiện tam giác vuông
        if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c)
        {
            cout << "tam giac vuong"<< endl;
            // điều kiện tam giác đều
        }
        else if (a == b && a == c)
        {
            cout << "tam giac deu"<< endl;
            // điều kiện tam giác cân
        }
        else if (a == b || a == c || b == c)
        {
            cout << "tam giac can"<< endl;
        }
        else
        {
            cout << "tam giac thuong"<< endl;
        }
    }
    else
    {
        cout << "Khong phai tam giac"<< endl;
    }
}
void namnhuan()
{
    int a;
    cout << "nhap nam: ";
    cin >> a;
    if ((a % 400 == 0 || a % 4 == 0) && a % 100 != 0)
    {
        cout << "nam nhuan" << endl;
    }
    else
    {
        cout << "khong phai nam nhuan"<<endl;
    }
}
void day()
{
    int a, b;
    cout << "nhap nam: ";
    cin >> a;
    cout << "nhap thang: ";
    cin >> b;
    // Điều kiện tháng có 31 ngày
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
    {
        cout << "co 31 ngay"<< endl;
    }
    // Điều kiện tháng 30 ngày
    else if (b == 4 || b == 6 || b == 9 || b == 11)
    {
        cout << "co 30 ngay" << endl;
    }
    // Tháng 2
    else if (b == 2)
    {
        // Tháng 2 năm nhuận
        if ((a % 400 == 0 || a % 4 == 0) && a % 100 != 0)
        {
            cout << "co 29 ngay" << endl;
        }
        // Tháng 2 năm khum nhuận
        else
        {
            cout << "co 28 ngay" << endl;
        }
    }
}

int main()
{
    int i;
    do
    {
        cout << "1.kiem tra tam giac" << endl;
        cout << "2.kiem tra nam nhuan" << endl;
        cout << "3.kiem tra ngay" << endl;
        cout << "0.ket thuc"<< endl;
        cout << "moi ban nhap chuong trinh muon su dung: "  ;
        cin >> i;
        switch (i)
        {
        case 1:
            checktriangle();
            break;
        case 2:
            namnhuan();
            break;
        case 3:
            day();
            break;

        default:
            break;
        }
        if(i==0){
            break;
        } else if(i>=4){
            cout<< "error" << endl;
        }

    } while (i < 4);
}