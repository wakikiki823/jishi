#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("����A:");scanf("%d",&a);
	printf("����B:");scanf("%d",&b);
    printf("����C:");scanf("%d",&c);
    min = a;
    if (min>b) min=b;
    if (min>c) min=c;
    printf("��Сֵ%d",min);
    return 0;
}
