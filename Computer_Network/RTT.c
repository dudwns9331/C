#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 ��Ʈ��ũ RTT ���ϱ�
 �ȿ���
*/
int main() {
	
	float alpha;
	float beta;

	float sample;

	float xest; // ����ERTT
	float xdev;

	float ERTT; // Estimated RTT
	float DRTT; // Dev RTT
	float TimeoutInterval;

	int i;

	

	printf("���� �� �Է� : ");
	scanf_s("%f", &sample);

	printf("���� ���� RTT �Է� : ");
	scanf_s("%f", &xest);

	printf("���� dev RTT �Է� : ");
	scanf_s("%f", &xdev);

	printf("���� �� �Է� : ");
	scanf_s("%f", &alpha);

	printf("��Ÿ �� �Է� : ");
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


	printf("���ð� �Է� : ");
	scanf("%f", &sample);

	xdev = DRTT;
	xest = ERTT;

	}
	return 0;

} 