#include <stdio.h>
#include <time.h>

// �Լ� ����
int getRandomNumber(int level);
void shwQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) 
{
	// ���� 5���� �ֽ��ϴ�. �� ������ ���� ����� ���� ��� �����Ǹ�
	// ������ ����ϰ� Ʋ���� �����մϴ�.

	srand(time(NULL));
	int count = 0; // ���� ������ ����
	for (int i = 1; i <= 5; i++)
	{
		// x * y = ?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		shwQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ� \n");
			exit(0); //�ٷ� ����
		}
		else if (answer == num1 * num2)
		{
			//����
			success();
			count++;
		}
		else
		{
			//����
			fail();
			break;
		}
	}
		printf("���� ���� : %d", count);
	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 3) + 1; // 0*3 +1 ~ �������� *3 +1
}
void shwQuestion(int level, int num1, int num2) 
{
	printf("\n\n\n######### %d��° ��й�ȣ ##########\n", level);
	printf("\n\t%d x %d�� �����ϱ�?\n\n", num1, num2);
	printf("####################################\n");
	printf("\n��й�ȣ >>");
}

void success() 
{
	printf("\n����!\n");
}

void fail() 
{
	printf("\n����!\n");
}

