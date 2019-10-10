#include<stdio.h>

int main(){
	int a = 3, b, c; // a(3) : 0000 0011;
	
	b = a << 1; // a의 비트를 한칸씩 좌측으로 이동 
	printf("%d %d\n", a, b); // 0000 0110 : 6;
	
	c = a << 2; // a의 비트를 두칸씩 좌측으로 이동 
	printf("%d %d\n", a, c); // 0000 1100 : 12;
	
	return 0;
} 
