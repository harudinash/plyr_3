

#include <stdio.h>

int main()
{
   int i,j,k,l,m,n,o;
   char a[100000],b[100000];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   
   for(i=0;a[i]!='\0';i++)
   {
       b[o]=a[i];
       
      for(j=i;a[j]==a[i];j++)
      {
          l++;
      }
      
      o++;
   b[o]=l+48;
   o++;
   i=i+l-1;
   l=0;
   }
   for(i=0;i<=o;i++)
   printf("%c",b[i]);
    return 0;
}
