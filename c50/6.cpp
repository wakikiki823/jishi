#include <stdio.h>
int main(void){
	int a,b;
	int sum=0;
	int i;
	printf("����a");scanf("%d",&a);
	printf("����b");scanf("%d",&b);
	if (a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++){
	sum+=i; 
}
printf("��Ϊ%d",sum);
return 0;
}
