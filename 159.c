#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,r,o=1,a[10000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    printf("Output :\n");
    
    l=m*n;
    while(l)
    {
        r=l%2;
     
        l=l/2;
     if(r==1)
        {
            i++;
        }
    }
    
     printf("%d",i);
    return 0;
}
