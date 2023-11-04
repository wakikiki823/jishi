#include <stdio.h>
int main(void){
	int a,b;
	int sum=0;
	int i;
	printf("整数a");scanf("%d",&a);
	printf("整数b");scanf("%d",&b);
	if (a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++){
	sum+=i; 
}
printf("和为%d",sum);
return 0;
}
