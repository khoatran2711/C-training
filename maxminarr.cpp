#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
   int a[50];
   int i, j, n, max;
   printf("nhap vao so phan tu cua mang");
   // nhập vào n số vòng lặp của for
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      // nhập các giá trị của mảng a
      printf("\n a[]=", i);

      scanf("%d", &a[i]);
      
      // cin >> a[i];
     
   }
   // in ra các giá trị vừa nhập của mảng a
   printf("cac phan tu cua mang vua nhap la \n");
   for (i = 0; i < n; i++)
      printf(" %d ", a[i]);
   // Tìm số lớn nhất
   //gán max = giá trị đầu tiên của mảng a
   max = a[0];
   for (i = 0; i < n; i++)
   {
      //So sánh max với giá trị mảng a[i]  
      //nếu max nhỏ hơn a[i] Thì gán max = a[i]
      if (max < a[i])
      {
         max = a[i];
         // in ra số lớn nhất
         cout << "so lon nhat la : " << max;
      }
   }

   return 0;
}