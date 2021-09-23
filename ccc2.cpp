#include <cstdio>

enum class Operation
{
	Add,
	Subtract,
	Multiply,
	Divide
};

struct Calculator
{
	// constuctor - initilizes with an operation
	Calculator(Operation op_in)
	{
		op = op_in; // initializes private member
	}

	// public method - only one per calculator made
	int calculate(int a, int b)
	{
		switch (op)
		{
		case Operation::Add:
			return (a + b);
		case Operation::Subtract:
			return (a - b);
		case Operation::Multiply:
			return (a * b);
		case Operation::Divide:
			return (a / b);
		default:
			return printf("Invalid op");
		}
	}
	// private variable being used
	Operation op;
};

int main()
{
	// Calculator initializations
	Calculator adder(Operation::Add); // adding calculator
	Calculator subtractor(Operation::Subtract); // subtracting calculator
	Calculator multiplier(Operation::Multiply); // multiplication calculator
	Calculator divider(Operation::Divide); // division calculator

	// adder tests
	int add1 = adder.calculate(4, 6);
	int add2 = adder.calculate(-4, 6);
	int add3 = adder.calculate(-4, -6);

	printf("Result of 4 and 6 is: %d\n", add1);
	printf("Result of -4 and 6 is: %d\n", add2);
	printf("Result of -4 and -6 is: %d\n", add3);

	// subtractor tests
	int sub1 = subtractor.calculate(10, 2);
	int sub2 = subtractor.calculate(-10, 2);
	int sub3 = subtractor.calculate(-10, -2);

	printf("Result of 10 and 2 is: %d\n", sub1);
	printf("Result of -10 and 2 is: %d\n", sub2);
	printf("Result of -10 and -2 is: %d\n", sub3);

	// multiplier tests
	int mult1 = multiplier.calculate(4, 5);
	int mult2 = multiplier.calculate(-4, 5);
	int mult3 = multiplier.calculate(-4, -5);

	printf("Result of 4 and 5 is: %d\n", mult1);
	printf("Result of -4 and 5 is: %d\n", mult2);
	printf("Result of -4 and -5 is: %d\n", mult3);

	// divider tests
	int div1 = divider.calculate(6, 2);
	int div2 = divider.calculate(6, -2);
	int div3 = divider.calculate(-6, 2);

	printf("Result of 6 and 2 is: %d\n", div1);
	printf("Result of 6 and -2 is: %d\n", div2);
	printf("Result of -6 and 2 is: %d\n", div3);
}
