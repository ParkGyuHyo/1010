#include <stdio.h>
int main(){
	int num;
	
	printf("수 입력:");
	scanf ("%d", &num);
	
	if (num % 7 == 0)
	{
		printf("%d는 7의 배수입니다.", num);
	}
	else
	{
		printf("%d는 7의 배수가 아닙니다.", num);
	}
}
