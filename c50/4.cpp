#include <stdio.h>
int main(void){
	int retry;
	
	do {
	int no;
	printf("��������");
	scanf("%d",&no);
	if (no>0)
	puts("����");
	else if (no=0)
	puts("0");
	else 
	puts("����");
	printf("�Ƿ����");
	scanf("%d",&retry);
	}while (retry==0);
	return 0;
}
