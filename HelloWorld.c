#include <stdio.h>

int main(void) {
	
	char szName[32] = { 0 };
	int nAge = 0;

	printf("���̸� �Է��ϼ���.: ");
	scanf_s("%d%*c", &nAge);
	// %*c�� �Է� ���ۿ� ���� �����͸� ������ ������ 
	// scanf�� ������� �� Enter�� ������ �Է¹��ۿ�
	// �����ִ� Enter�� ���ִ� ������� ���
	// fflush(stdin)�� ����� ��� �Ұ�
	// getchar()�� ���ؼ� �׳� \n�� ���� ����
	// ������ ���� �����ʾƼ� �������Ƿ�
	// �Է¹��۰� �����ϰ� �������.

	printf("�̸��� �Է��ϼ���.: ");
	gets_s(szName, sizeof(szName));

	printf("����� ���̴� %d���̰� �̸��� \'%s\'�Դϴ�.", nAge, szName);

	return 0;
}