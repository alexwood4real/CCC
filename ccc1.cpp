#include <cstdio>

int absolute_value(int x)
{
	if (x > 0)
	{
		return x;
	}
	else if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return 0;
	}
}

int sum(int x, int y)
{
	return (x + y);
}

int main()
{
	int my_num = -10;
	printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

	int num1 = 20; // test a postive number
	int num2 = -5; // test a negative number
	int num3 = 0; // test zero

	printf("The absolute value of a positive number %d is: %d\n", num1, absolute_value(num1));
	printf("The absolute value of a negative number %d is: %d\n", num2, absolute_value(num2));
	printf("The absolute value of %d is: %d\n", num3, absolute_value(num3));

	int sum1 = sum(5, 7);
	int sum2 = sum(-5, -4);
	int sum3 = sum(4, -6);

	printf("sum of %d and %d is: %d\n", 5, 7, sum1);
	printf("sum of %d and %d is: %d\n", -5, -4, sum2);
	printf("sum of %d and %d is: %d\n", 4, -6, sum3);
}
