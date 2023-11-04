#include <stdio.h>
int main(void){
	int retry;
	
	do {
	int no;
	printf("输入整数");
	scanf("%d",&no);
	if (no>0)
	puts("正数");
	else if (no=0)
	puts("0");
	else 
	puts("负数");
	printf("是否继续");
	scanf("%d",&retry);
	}while (retry==0);
	return 0;
}
