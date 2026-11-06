#include<stdio.h>
int main()
{
   int Arr[5] = {10,20,30,40,50};

   printf("%d\n",Arr);           //100
    
   printf("%d\n",&Arr);          //100

   printf("%d\n",Arr + 1);       //104
   printf("%d\n",(&Arr) + 1);    //116
   
   
   return 0;
}
