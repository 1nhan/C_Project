#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1; // 0 + 1 ~ 99 + 1 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ

	while (chance >= 0)
	{
		if (chance == 0) {
			printf("���� : %d\n", num);
			break;
		}
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� ���纸����.(1~100) : ");

		scanf_s("%d", &answer);
		if (answer == num) {
			printf("�����Դϴ�!\n");
			break;
		}
		else if (answer < num) {
			printf("Hint: ������ �� Ů�ϴ�. ��\n");
		}
		else if (answer > num) {
			printf("Hint: ������ �� �۽��ϴ�. ��\n");
		}
		else
		{
			printf("�ٽ� �����ϼ���\n!");
		}

	}

	return 0;
}
