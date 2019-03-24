#include <stdio.h>

int main()
{
    int i,n,m,k,a[1000];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    
   for(i=1;i<n;i++)
   {
       m=a[i];
       k=a[i-1];
       if(m%k==0)
        printf("%d ",a[i]);
   }
   
    return 0;
}
