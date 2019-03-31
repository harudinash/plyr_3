{
    int i=1,j,k,l,m,n,r,o=1,a[10000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    printf("Output :\n");
    
    l=m*n;
    while(l)
    {
        r=l%2;
      a[i]=r;
     // printf("r %d ",r);
        l=l/2;
     
        i++;
        
    }
    
      o=0;  
    
    for(j=i;j>0;j--)
    {
        if(a[j]==1)
        {
            o++;
            for(k=j-1;k>0;k--)
            {
               
                
            if(a[k]==1)
            {
            printf("%d",o);
            
            break;
            }
             o++;
            }
        }
        o++;
    }
    return 0;
}
