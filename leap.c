#include<stdio.h>
int main(){
	int year;
	
	printf("�⵵ �Է�: ");
	scanf("%d", &year);
	
	if (year%4==0 && year%100!=0 || year%400==0){
	// �ش�⵵�� 4�� ������ �������鼭 100���� �ȳ����� ��������
	// �Ǵ� �ش�⵵�� 400���� ������ ���������� ���� �� �ܿ��� ��� 
		printf("%d���� ����(leap year) �Դϴ�.\n", year);
	}
	else
	{
		printf("%d���� ���(common year) �Դϴ�.", year);
	}
	
	return 0;
}
