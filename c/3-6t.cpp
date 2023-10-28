#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("整数A:");scanf("%d",&a);
	printf("整数B:");scanf("%d",&b);
    printf("整数C:");scanf("%d",&c);
    min = a;
    if (min>b) min=b;
    if (min>c) min=c;
    printf("最小值%d",min);
    return 0;
}
