#include <stdio.h>
int main(void)
{
	int a,b,cha;
	cha=a>b?(a-b):(b-a);
	puts("����������������");
	printf("����A:");scanf("%d",&a);
	printf("����B:");scanf("%d",&b);
	if (cha<=10)
	puts("���ǵĲ�С�ڵ���10��");
	else
	puts("���ǵĲ���ڵ���11��");	
	return 0;
 } 
