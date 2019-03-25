#include <stdio.h>

int main()
{
    int i,j,k=1,l=1,m,n;
    scanf("%d%d",&m,&n);
    
    while(m)
    {
        
        l=l*m;
        m--;
    }
    while(n)
    {
        k=k*n;
        n--;
    }
    j=l/k;
    
    printf("%d",j);
    
    return 0;
}
