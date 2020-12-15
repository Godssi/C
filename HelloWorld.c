#include <stdio.h>

int main(void) {
	
	char szName[32] = { 0 };
	int nAge = 0;

	printf("나이를 입력하세요.: ");
	scanf_s("%d%*c", &nAge);
	// %*c는 입력 버퍼에 받은 데이터를 버리는 것으로 
	// scanf를 사용했을 때 Enter를 눌러서 입력버퍼에
	// 남아있는 Enter를 없애는 기능으로 사용
	// fflush(stdin)는 현재는 사용 불가
	// getchar()를 통해서 그냥 \n을 받은 다음
	// 저장을 따로 하지않아서 버려지므로
	// 입력버퍼가 깨끗하게 비워진다.

	printf("이름을 입력하세요.: ");
	gets_s(szName, sizeof(szName));

	printf("당신의 나이는 %d살이고 이름은 \'%s\'입니다.", nAge, szName);

	return 0;
}