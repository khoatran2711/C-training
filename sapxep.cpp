#include <iostream>
using namespace std;
void check() {
    
}

int main(){
    int arr[100];
    int b;
    cout << "nhap so phan tu mang" << endl;
    cin >> b;
    // int i = 0,j = 0; 

    for(int i=0; i <b;i++){
        cout << "nhap phan tu: " << endl;
        cin >> arr[i];
        

    } 
    
    
    
    for(int i = 0;i < b;i++){
        for(int j = i+1; j < b; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[j];
            }
        }
    }
    for(int i=0;i<b;i++){
        cout << arr[i] << endl;
    }
    
    

}