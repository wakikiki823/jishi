#include <stdio.h>
int main(void)
{
	int a,b,c;
	puts("����������������");
	printf("����A:"); scanf("%d",&a); 
	printf("����B:"); scanf("%d",&b); 
	printf("����C:"); scanf("%d",&c);  
	if (a==b||a==c||b==c) 
	puts("������ֵ��ȡ�");
	else if (a==b&&b==c) 
	puts("����ֵ����ȡ�");
	else
	puts("����ֵ������ȡ�");
	return 0; 
} 
