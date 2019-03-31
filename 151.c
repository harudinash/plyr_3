#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,o;
    char a[10000],b[10000];
    printf("Input :\n");
    gets(a);
    printf("Output :\n");
    
    for(l=0;a[l]!='\0';l++);
    
    
    for(i=0;i<l;i++)
    {
       if((a[i]=='a')||(a[i]=='b'))
       {
           o++;
       }
    }
    
    if((o==l)||(o==l-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    
   

    return 0;
}
