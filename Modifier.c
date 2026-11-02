#include<stdio.h>
int main()
{
   int no = 11;
   short int num1 = 11;
   long int num2 = 11;

   printf("%d\n ",sizeof(no));   //4
   printf("%d\n ",sizeof(num1));  // 2
   printf("%d\n ",sizeof(num2));  //8

   
   return 0;
}
