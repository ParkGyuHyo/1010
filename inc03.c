#include<stdio.h>

int main(){
	int a, b, c;
	
	a = 6;
	
	b = a++; // b에 먼저 6을 대임 후 a가 + 1을 처리함. 
	printf("%d %d\n", a, b); // 6, 7
	// a = 7;
	c = ++a; // a가 먼저 +1을 처리한 후 c에 대입함. 
	printf("%d %d\n", a, c); // 8, 8
	
	return 0;
} 
