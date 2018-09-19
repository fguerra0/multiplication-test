#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((int) time (NULL));
	int num1, num2, inputnum, i, counter;
	for(i = 0; i < 10; i++)
	{
		printf("Please solve: ");
		num1 = rand() % 13;
		num2 = rand() % 13;
		printf("%d * %d\n", num1, num2);
		scanf("%d", &inputnum);
		int answer = num1 * num2;
		if(inputnum == answer)
		{
			printf("Correct!\n");
			counter++;
		} else
		{
			printf("Incorrect!\n");
		}
	}
	int score = counter * 10;
	printf("Here is your final score: %d %%!\n", score);
	return 0;
}
