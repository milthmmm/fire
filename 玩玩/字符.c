#include<stdio.h>

 int main()
{printf("请输入一行字符：");
    int i,j,k,n;
    char c;
    while((c=getchar())!='\n')
    {
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    i++;
    else if(c==' ') j++;
    else if(c>='0'&&c<='9') k++;
    else n++;
    printf("字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n",i,j,k,n); 
    }return 0;
}
