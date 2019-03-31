#include <stdio.h>

int main()
{
    int a[10000],i,j,k,l,m,n,o;
    char b[10000];
    printf("Input :\n");
    
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    
   
    for(i=k;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }

for(i=0;i<n;i++)
printf("%d ",a[i]);
    return 0;
}
