#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 네트워크 RTT 구하기
 안영준
*/
int main() {
	
	float alpha;
	float beta;

	float sample;

	float xest; // 이전ERTT
	float xdev;

	float ERTT; // Estimated RTT
	float DRTT; // Dev RTT
	float TimeoutInterval;

	int i;

	

	printf("샘플 값 입력 : ");
	scanf_s("%f", &sample);

	printf("이전 추정 RTT 입력 : ");
	scanf_s("%f", &xest);

	printf("이전 dev RTT 입력 : ");
	scanf_s("%f", &xdev);

	printf("알파 값 입력 : ");
	scanf_s("%f", &alpha);

	printf("베타 값 입력 : ");
	scanf_s("%f", &beta);
	for(i = 0; i < 5; i++) {

	ERTT = alpha * sample + (1 - alpha) * xest;
	printf("EstimatedRTT = %.2f", ERTT);
	printf("\n");

	DRTT = beta * fabs(sample - ERTT) + (1 - beta) * xdev;
	printf("DevRTT = %.2f", DRTT);
	printf("\n");

	TimeoutInterval = ERTT + 4 * DRTT;
	printf("timeoutInterval = %.2f", TimeoutInterval);
	printf("\n");
	printf("\n");


	printf("샘플값 입력 : ");
	scanf("%f", &sample);

	xdev = DRTT;
	xest = ERTT;

	}
	return 0;

} 