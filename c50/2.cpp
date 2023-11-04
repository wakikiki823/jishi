#include <stdio.h>
int main(void){
	int a,b,c;
	printf("请输入两门成绩：");
	scanf("%d",&a); 
	scanf("%d",&b); 
	if (a<0||a>100||b<0||b>100){
		c=1;
	}
	else if (a<60||b<60){
		c=2;
	}
	else {
		c=3;
	}
	switch (c) {
		case 1 :printf("it is error"); break;
		case 2 :printf("it is not pass"); break;
		case 3 :printf("it is pass"); break;
	}
	return 0;
}
