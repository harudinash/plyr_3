

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
       if(a[i]!=' ')
       l++;
   }
   
   for(i=3;i<=l;i++)
   {
       m=0;
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           {
               m=1;
            break;
           }
           
       }
       if((m==0)&&(i==l))
       {
           n=1;
           printf("yes");
           break;
       }
       
   }
   if(l==2)
   {
       printf("yes");
       n=1;
   }
   if(n==0)
   printf("no");
    return 0;
}
