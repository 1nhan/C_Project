#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1; // 0 + 1 ~ 99 + 1 사이의 숫자
	printf("정답 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회

	while (chance >= 0)
	{
		if (chance == 0) {
			printf("정답 : %d\n", num);
			break;
		}
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞춰보세요.(1~100) : ");

		scanf_s("%d", &answer);
		if (answer == num) {
			printf("정답입니다!\n");
			break;
		}
		else if (answer < num) {
			printf("Hint: 정답은 더 큽니다. ↑\n");
		}
		else if (answer > num) {
			printf("Hint: 정답은 더 작습니다. ↓\n");
		}
		else
		{
			printf("다시 도전하세요\n!");
		}

	}

	return 0;
}
