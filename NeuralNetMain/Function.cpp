#include "stdafx.h"
#include "Function.h"

int funct(int input) {

	int rand_ = (rand() % 3);

	switch (rand_)
	{
	case 0://tanh
	{
		input = (exp(input) - exp(-input)) / ((exp(input) + exp(-input)));
		if (input > 0) return 0;
	}
	case 1://logistic
	{
		input = exp(input) / (1 + exp(input));
		if (input > 0) return 0;
	}
	case 2:
	{
		if (input > 0) return 0;
	}
	return 1;
	}
}