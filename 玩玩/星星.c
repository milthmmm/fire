#include<stdio.h>

 main()
{
     int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
    for(j=1;j<n;j++);
    printf(" ");
        for(k=1;k<=2*i-1;k++);
    printf("*");
    }
    return 0;
}
