#include <stdlib.h>
#include <stdio.h>
int main()
{
	int divisible = 0;
	int divider = 0;
	printf("Enter divisible ");
	scanf_s("%d", &divisible);
	printf("Enter divider ");
	scanf_s("%d", &divider);
	int sign = 1;
	if (divisible * divider < 0)
		sign = -1;
	divisible = abs(divisible);
	divider = abs(divider);
	if (divisible > divider)
	{
		int counter = 0;
		while (divisible > divider)
		{
			divisible = divisible - divider;
			counter += 1;
		}
		int incompleteQuotient = counter;
		printf("%d", sign * incompleteQuotient);
	}
	else
	{
		printf("0");
	}
}