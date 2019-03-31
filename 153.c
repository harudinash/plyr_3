#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,o;
    char a[10000],b[10000];
    printf("Input :\n");
    gets(a);
    scanf("%d",&n);
    printf("Output :\n");
    
    for(i=0;a[i]!='\0';i++);
    
n=n-1;
    
    for(j=0;j<i;j++)
    {
        j=j+n;
        printf("%c ",a[j]);
    }
    
    
   

    return 0;
}
