#include <iostream>
#include <string.h>
using  namespace std;
int main() {
    char str[100];
    cout << "nhap chuoi" << endl;
    cin >> str;
    int test = 0;
    for(int i = 0;i <=strlen(str);i++){
        
        for(int j = strlen(str);j>=0;j--){
            if(str[i]==str[j]){
                test++;
                break;
            } else {
                test--;
            }
                
            
        }
    } 
    cout << test;


}