#include <stdio.h>

int main(void)
{
	// 프로젝트 
	// 경찰관이 범죄자의 정보를 입수 (조사 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?

	char name[30];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);

	double weight;
	printf("몸무게는 몇 kg이에요?");
	scanf_s("%lf", &weight);

	double height;
	printf("키는 몇 cm이에요?");
	scanf_s("%lf", &height);

	char crime_name[30];
	printf("무슨 범죄를 저질렀나요?");
	scanf_s("%s", crime_name, sizeof(crime_name));

	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2lf\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄 : %s\n", crime_name);

	return 0;
}