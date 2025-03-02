#include<stdio.h>

 int main()
{
     int m,n,i,min;
     printf("请输入两个整数：");
     scanf("%d,%d",&m,&n);
     if (m<n) min=m;
     else n=min;
     for(i=2;i<=min;i++)
    
	printf("公约数为：%d",i);}
	
}
    return 0;
}
