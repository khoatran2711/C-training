#include <iostream>
#include <math.h>
using namespace std;

bool songuyento(int a){

    if(a < 2){
        return false;
    }
    
    for(int i = 2; i < a ; i++){
        if(a % i == 0){
            return false;
        }
    }

    return true;
}

int main()
{
 
    int n;
    cout << "Nhap so N" << endl;
    cin >> n;
    if (n < 2)
    {
        cout << n << "Khong phai la so nguyen to";
    }
    else
    {
        cout << "So nguyen to la:" << endl;
        for(int i = 2 ; i < n; i++){
            
            if(songuyento(i)){
                cout << i << endl;
            }

        }

       
    }
    // // cout << "end";
}