#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,r;
    char a[10000];
    printf("Input :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
           {
               l++;
            printf("l %d",l);
            break;
           }
        }
        
        
    }
    printf("Output :\n");
   
    if(l==n)
    printf("yes");
    else
    printf("no");
    
    
    
    
    return 0;
}
