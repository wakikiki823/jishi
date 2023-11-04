#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("输入三个实数:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a==b&&a==c){ 
		printf("1");
	} else if(a==b||a==c||b==c){ 
		printf("2");
	} else if (a+b>c&&b+c>a&&a+c>b) { 
		printf("3");
	} else { 
		printf("0");
	} 
    return 0;
} 
