#include <iostream>
#include<cctype>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    char st[50];
    cout << "nhap chuoi :" << endl;
    gets(st);
     fflush(stdin);
    cout << "chuoi da nhap  la:" << st << endl;
    cout <<"so ky tu la : " <<  strlen(st) << endl;
    cout << "chuoi viet thuong : " << strlwr(st) << endl;
    cout << "chuoi viet hoa : " << strupr(st) << endl;
    
    // for(int i = strlen(st); i >=0  ;i-- ){
    //     if(st[i] != ' '){
    //          cout << st[i];
            
    //     } else {
    //         break;
    //     }
        
    // } 

   

}
