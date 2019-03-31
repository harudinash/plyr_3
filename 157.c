#include <stdio.h>

int main()
{
    int i=1,j,k,l,m,n,r,o=1,a[10000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    printf("Output :\n");
    
    l=m*n;
    while(l)
    {
        r=l%2;
      a[i]=r;
        l=l/2;
     
        i++;
        
    }
    
        
    
    for(j=1;j<i;j++)
    {
        
        if(a[j]==1)
        {
            printf("%d",j);
            break;
        }
        
    }
    return 0;
}
