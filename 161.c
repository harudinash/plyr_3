#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,r,o=1;
    char a[10000];
    printf("Input :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            l++;
        }
        
        
    }
    printf("Output :\n");
   
    if(l==n)
    printf("yes");
    else
    printf("no");
    
    
    
    
    return 0;
}
