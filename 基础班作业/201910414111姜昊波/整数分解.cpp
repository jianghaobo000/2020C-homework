#include <stdio.h>

int main() {
	int N, k;
	char sum[100];
	int i;
	printf("请输入整数：");
	scanf_s("%d", &N);
	if (N % 2 == 1)
		printf("可以分解");
	else{
		for (i = 1, sum[0] = 2; i < 100; i++) 
			sum[i] = 2 * sum[i - 1];
		for (i = 0; i < 100; i++) {
			if (N == sum[i]) 
				k == 1;		
		}
		if (k == 1)
			printf("none");
		else
			printf("可以分解");
	}	

}