#include <stdio.h>
#include <string.h>

int main(){
	//khai bao
	char st[40];
	
	//nhap chuoi
	fflush(stdin);
	printf("Nhap chuoi : ");  
	gets(st);
	//=====================================
	
	
	for(int i = 0 ; i < strlen(st) - 1 ; i++){		
		int dem = 0;
		for(int j = i-1 ; j >= 0 ; j--){
			if(st[j] == st[i]){
				dem++;
				break;
			}
		}
		if(!dem){
			for(int j = i ; j < strlen(st) ; j++){
				if(st[i] == st[j]){
					dem++;
				}
			}
			printf("\n'%c' xuat hien : %d", st[i], dem);
			//printf("\n============");		
		}				
	}
}
