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
        for(j=0;j<n;j++)
        {
            
        
        if(a[i]<a[j])
        {
            l=a[i];
            a[i]=a[j];
            a[j]=l;
        }
        
        }
        
    }
    
    for(i=0;i<n;i++)
    
    {
        if(a[i]>m)
        {
            printf("%d",a[i]);
            break;
        }
        
    }
    
    
    
    return 0;
}
