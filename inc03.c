#include<stdio.h>

int main(){
	int a, b, c;
	
	a = 6;
	
	b = a++; // b�� ���� 6�� ���� �� a�� + 1�� ó����. 
	printf("%d %d\n", a, b); // 6, 7
	// a = 7;
	c = ++a; // a�� ���� +1�� ó���� �� c�� ������. 
	printf("%d %d\n", a, c); // 8, 8
	
	return 0;
} 
