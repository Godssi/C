#include <stdio.h>

int main(void)
{
	// ������Ʈ 
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?

	char name[30];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);

	double weight;
	printf("�����Դ� �� kg�̿���?");
	scanf_s("%lf", &weight);

	double height;
	printf("Ű�� �� cm�̿���?");
	scanf_s("%lf", &height);

	char crime_name[30];
	printf("���� ���˸� ����������?");
	scanf_s("%s", crime_name, sizeof(crime_name));

	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %.2lf\n", weight);
	printf("Ű : %.2lf\n", height);
	printf("���� : %s\n", crime_name);

	return 0;
}