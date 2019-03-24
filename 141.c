#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    char a[1000][1000],b[1000],c[1000];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
     scanf("%s",a[i]);

//for(i=0;i<n;i++)
  //   printf("%s ",a[i]);
     
     for(i=0;i<n;i++)
     {
         k=0;
         strcpy(b,a[i]);
         strcpy(c,a[i+1]);
         for(j=0;b[j]!='\0';j++)
         {
             if(b[j]!=c[j])
          {
              k=1;
              break;
          }
         }
         if(k==0)
         {
         printf("yes");
         l=1;
         break;
         }
     }
     
     if(l==0)
     printf("no");
    return 0;
}
