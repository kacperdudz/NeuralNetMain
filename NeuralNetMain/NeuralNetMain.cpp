// NeuralNetTest_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

#include "NeuralNet.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 


int main()
{
	srand(time(NULL));

	int rand_ = (rand() % 3) + 1;

	vector<int> dim = { 2 };

	for (int i = 0; i < rand_; i++)
	{
		dim.push_back((rand() % 5) + 1);
	}


	dim.push_back(2);

	for (int i = 0; i < dim.size(); i++)
	{
		cout << dim[i] << ", ";
	}
	cout << endl;
	cout << endl;
	cout << endl;

	NeuralNet a(dim);
	a.RandWeights();
	a.Update();
	a.Disp();
	return 0;
}