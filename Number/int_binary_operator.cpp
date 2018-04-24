#include "int_binary_operator.h"

int mutiply0_0(int a, int b)
{
	if (a == 0) return b;
	int result = mutiply0_0(a-1, b) + b;
	return result;
}

int mutiply0_1(int a, int b)
{
	return a == 1? b : mutiply0_1(a - 1, b);
}

int mutiply1_0(int a, int b)
{
	if (a == 1) return b;

	return 0;
}
