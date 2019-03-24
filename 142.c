#include <stdio.h>

int main()
{
    int i,j,k,l,m=1,n,p;
    char a[1000][1000],b[1000],c[1000];
    
    scanf("%d%d",&n,&p);
    
    for(i=0;i<n;i++)
     scanf("%s",a[i]);

//for(i=0;i<n;i++)
  //   printf("%s ",a[i]);
     
     for(i=0;i<n-1;i++)
     {
         k=0;
         strcpy(b,a[i]);
         strcpy(c,a[i+1]);
         for(j=0;b[j]!='\0';j++)
         {
             if(b[j]!=c[j])
          {
              k=1;
              m=1;
              break;
          }
         }
         if(k==0)
         {
             m++;

         
         
         }
     }
    // printf("%d %d\n",m,p);
     if(m==p)
     printf("yes");
     else
     printf("no");
    return 0;
}
