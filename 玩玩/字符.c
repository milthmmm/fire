#include<stdio.h>

 int main()
{printf("������һ���ַ���");
    int i,j,k,n;
    char c;
    while((c=getchar())!='\n')
    {
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    i++;
    else if(c==' ') j++;
    else if(c>='0'&&c<='9') k++;
    else n++;
    printf("��ĸ����%d\n�ո�����%d\n��������%d\n�����ַ�����%d\n",i,j,k,n); 
    }return 0;
}
