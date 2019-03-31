#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,o;
    char a[10000],b[10000];
    printf("Input :\n");
    gets(a);
    printf("Output :\n");
    
    for(l=0;a[l]!='\0';l++);
    for(i=l-1;i>0;i--)
    {
        if(a[i]==' ')
        {
            k=i;
            break;
        }
    }
    for(i=0;i<l;i++)
    {
        if(i<k)
        {
       if(a[i]!=' ')
       {
           b[i]=a[i];
       }
       else
       {
           o=i;
           for(j=i+1;a[j]!=' ';j++);
           for(m=j;m>=i;m--)
           {
               b[o]=a[m];
               o++;
           }
           i=o-2;
       }
        }
        else
        {
            b[i]=a[i];
        }
    }
    
    for(i=0;i<l;i++)
    printf("%c",b[i]);

    return 0;
}
