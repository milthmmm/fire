#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	if(x>0){
		if(x%5%7==0) printf("Yes!");
		else printf("No!");
	}else printf("Data error!"); 
	return 0;
} 
