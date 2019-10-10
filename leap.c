#include<stdio.h>
int main(){
	int year;
	
	printf("년도 입력: ");
	scanf("%d", &year);
	
	if (year%4==0 && year%100!=0 || year%400==0){
	// 해당년도가 4로 나누어 떨어지면서 100으로 안나누어 떨어질때
	// 또는 해당년도가 400으로 나누어 떨어질때를 윤년 그 외에는 평년 
		printf("%d년은 윤년(leap year) 입니다.\n", year);
	}
	else
	{
		printf("%d년은 평년(common year) 입니다.", year);
	}
	
	return 0;
}
