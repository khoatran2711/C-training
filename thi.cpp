#include <iostream>
using namespace std;

    
    
    

int main(){
    int arr[100], a, b;
    cout << "nhap so mang: ";
    cin >> a;
    for(int i = 0; i < a; i++){
        cout << "nhap gia tri mang " << i << ": " ;
        cin >> arr[i];

    }
    cout << "so mang la: " << a << endl;
    int check = 0;
    for (int i = 0;i < a; i++) {
        for (int j = a; j >=0; j--) {
            if(arr[i]==arr[j]){
                check++;
                break;
            }
        }
    }
    if(check != 0){
        cout << "mang doi xung" << endl;
    } else {
        cout << "mang khong doi xung"<< endl;
    }
    cout << "cac gia tri vua nhap la: ";
    for(int i = 0; i < a;i++){
        cout << arr[i] << ";";
    }
    




}
