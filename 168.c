

#include <stdio.h>

int main()
{
   int i,j,k,l,m,n;
   char a[100000];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   
   for(i=0;a[i]!='\0';i++)
   {
       m=a[i+1]-48;
      while(m)
      {
          printf("%c",a[i]);
          m--;
      }
      i++;
   }
   
   
    return 0;
}
