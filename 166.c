#include <stdio.h>

int main()
{
    int i=1,j,k=1,l=1,m,n,r,a[10000];
    //char a[10000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
   
    printf("Output :\n");
    
    while(n)
    {
        l=l*n;
        n--;
    }
    while(m)
    {
        k=k*m;
        m--;
    }
    if(l<k)
    i=l;
    else
    i=k;
    
    while(i)
    {
        if((l%i==0)&&(k%i==0))
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    
    
    
    return 0;
}
