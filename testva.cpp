#include <iostream>
using namespace std;
void inf(){
	int MSV;
	char HotenSV[50] , Sex[50];
	printf("nhap MSV :");
	scanf("%d",&MSV);
 	printf("HotenSV :");
 	scanf("%s",&HotenSV);
 	printf("Gioi tinh:");
 	scanf("%s",&Sex);
 	printf("thong tin vua nhap la:");
 	printf("\nMSV:%d");
 	printf("\nHotenSV:%s");
 	printf("\nSex:%s");
 	
}
void sochia(){
	int a;
	printf("nhap so A = ");
	scanf("%d",&a);
	if(a%7==0 && a%3==0){
		printf("chia het cho 7 va cho 3");
	}
	else{
		printf("khong chia het cho 7 va cho 3");
	}
	if(a%2==0){
		printf("la so chan");
	}
	else{
		printf("la so le");
	}
}
void cuahanggao(){
    int b;
    float soluong[50],max,s=0;
    char name[50];
    printf("nhap so loai gao la:");
    scanf("%d",&b);
    max=soluong[0];
    for(int i=0;i<b;i++){
        printf("Nhap loai gao %d:",i);
        scanf("%s",&name[i]);
        printf("khoi luong gao cua %d:",i);
        scanf("%f",&soluong[i]);
        if(soluong[i]>max){
            soluong[i]=max;
        }
        s+=soluong[i];    
    }
    printf("so loai gao la:");
    printf("\nso luong loai gao lon nhat la: %f",max);
    printf("\ntrung binh so luong loai gao la:",s/b);
    }
int main(){
	int i;
	do{
        printf("Menu:");
 		printf("\n1.Thong tin sinh vien");
 		printf("\n2.So chia het cho 7 va cho 3");
 		printf("\n3.Thong tin cua hang ban gao");
 		printf("\n0.Thoat");
 		printf("\nnhap so i =");
 		scanf("%d",&i);
 		if(i==0){
 			printf("\nThoat");
 			break;
             }
 		switch(i){
 			case 1:
 				inf();
 				break;
 			case 2:
			 	sochia();
			 	break;
            case 3:
                cuahanggao();
                break;           
			default:
			 	printf("error!");
		 }	
	}while(i<4);
}

