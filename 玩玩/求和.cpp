#include<stdio.h>

 int main()
{
    double s1,s2,s3;
	int i,j,k;
    for(i=1;i<=100;i++)
    s1+=i;
    for(j=1;j<=50;j++)
    s2+=j*j;
    for(k=1;k<=10;k++)
    s3+=1/k;
    printf("%f",s1+s2+s3) ;
    return 0;
}
