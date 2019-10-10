#include<stdio.h>

int main(){
	int a = 5, b = 3, c; // a(5) : 0000 0101 , b(3) : 0000 0011
	
	c = a & b; // and 연산자 ( 두 비트가 모두 1일때 1을 반환 ) 
	printf("%d %d %d\n", a, b, c); // 0000 0001 : 1
	 
	c = a | b; // or 연산자 ( 두 비트중 하나라도 1일때 1을 반환 ) 
	printf("%d %d %d\n", a, b, c); // 0000 0111 : 7
	
	c = a ^ b; // xor 연산자 ( 두 비트가 다를때 1을 반환 ) 
	printf("%d %d %d\n", a, b, c); // 0000 0110 : 6
	
	c = ~a; // not 연산자 ( 대상 비트의 반대 비트를 반환 ) 
	printf("%d %d\n", a, c); // 0000 0101 : 5의 반대 0000 1010 : -6 
	
	return 0;
}
