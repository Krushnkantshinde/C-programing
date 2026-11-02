#include<stdio.h>
int main()
{
   char ch = 'A';
   int No = 11;
   float Marks = 90.78f;
   double d = 90.3445767;

   printf("%d\n",sizeof(ch));
   printf("%d\n",sizeof(No));
   printf("%d\n",sizeof(Marks));
   printf("%d\n",sizeof(d));
   
   return 0;
}
