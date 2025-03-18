#include <stdio.h>
int main(){
	int year,month,day;
	scanf("%d-%d",&year,&month);
	if(month==1||month==3||month==5||month==7
	||month==8||month==10||month==12) 
	day=31;
	else if(month=2) day=28;
	else day=30;
	if(year%4==0&&month==2) day=29
	printf("%d",day);
	return 0;
} 
