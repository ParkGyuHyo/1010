#include<stdio.h>

int main(){
	int a = 3, b, c; // a(3) : 0000 0011;
	
	b = a << 1; // a�� ��Ʈ�� ��ĭ�� �������� �̵� 
	printf("%d %d\n", a, b); // 0000 0110 : 6;
	
	c = a << 2; // a�� ��Ʈ�� ��ĭ�� �������� �̵� 
	printf("%d %d\n", a, c); // 0000 1100 : 12;
	
	return 0;
} 
