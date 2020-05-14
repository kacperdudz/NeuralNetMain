//#pragma once
#ifndef _NEURALNET_
#define _NEURALNET_

#include <vector>

class NeuralNet
{
private:
	struct Node {
		double value;
		vector<double> weight;
	};
	vector<vector<Node>> NN;
	vector<int> dim;
public:
	NeuralNet();
	NeuralNet(vector<int> dim_);
	void RandWeights();
	void Update();
	void Disp();

	//double funct(double input);
};
#include "NeuralNet.cpp"
#endif