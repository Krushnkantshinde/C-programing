#include<stdio.h>
int main()
{
   int Arr[5] = {10,20,30,40,50};

   printf("%d\n",sizeof(Arr));     //20
   printf("%d\n",sizeof(Arr[2]));  //4
   printf("%d\n", Arr[2]);         //30
   
   return 0;
}
