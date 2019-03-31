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
        
        k=a[j];
        if((k>96)&&(k<123))
        {
            
        
        k=k-32;
        }
        a[j]=k;
       
    }
    
    
   for(m=0;m<i;m++)
   printf("%c",a[m]);

    return 0;
}
