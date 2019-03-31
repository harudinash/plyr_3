#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,r,a[10000];
    //char a[10000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        l=1;
    }
    if(l==0)
    printf("no");
    else
    printf("yes");
    
    
    return 0;
}
