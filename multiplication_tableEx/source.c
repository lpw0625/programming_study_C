#include <stdio.h>

int main(void)
{
	for (int i = 2; i < 10; i++) // 2부터 9까지 조건문을 걸어 2단부터 9단까지 적용.,
	{
		for (int j = 1; j < 10; j++) // 1부터 9까지 조건문을 걸어 1부터 9까지 적용.,
		
		{
			printf("%d * %d = %d \n", i, j, (i * j));
		}
		printf("\n");
	}
	return 0;
}
