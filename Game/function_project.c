#include <stdio.h>
#include <time.h>

// 함수 선언
int getRandomNumber(int level);
void shwQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) 
{
	// 문이 5개가 있습니다. 각 문마다 점점 어려운 수식 퀴즈가 출제되며
	// 맞히면 통과하고 틀리면 실패합니다.

	srand(time(NULL));
	int count = 0; // 맞힌 문제의 갯수
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
			printf("프로그램을 종료합니다 \n");
			exit(0); //바로 종료
		}
		else if (answer == num1 * num2)
		{
			//성공
			success();
			count++;
		}
		else
		{
			//실패
			fail();
			break;
		}
	}
		printf("맞힌 갯수 : %d", count);
	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 3) + 1; // 0*3 +1 ~ 레벨마다 *3 +1
}
void shwQuestion(int level, int num1, int num2) 
{
	printf("\n\n\n######### %d번째 비밀번호 ##########\n", level);
	printf("\n\t%d x %d는 무엇일까?\n\n", num1, num2);
	printf("####################################\n");
	printf("\n비밀번호 >>");
}

void success() 
{
	printf("\n성공!\n");
}

void fail() 
{
	printf("\n실패!\n");
}

