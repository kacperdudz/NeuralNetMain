#include "NeuralNet.h"
#include <iostream>
#include "Function.h"


NeuralNet::NeuralNet() {
	/*n.weight.push_back(3);
	n.weight.push_back(10);*/
}

NeuralNet::NeuralNet(vector<int> dim_)
{
	dim = dim_;

	vector<Node> temp_v1;
	Node temp_n1;
	for (int i = 0; i < dim[0]; i++)
	{
		temp_n1.value = 1;
		temp_v1.push_back(temp_n1);
	}

	NN.push_back(temp_v1);

	for (int i = 1; i < dim.size(); i++)
	{
		//cout << i << endl << endl;

		vector<Node> temp_v;
		Node temp_n;
		for (int j = 0; j < dim[i]; j++)
		{
			temp_n.value = 0;
			temp_v.push_back(temp_n);
			//cout << "\t"  << main_v[i][j] << endl;
			//cout << "\t" << j << endl;
		}
		NN.push_back(temp_v);
		//cout << endl;
	}
}

void NeuralNet::RandWeights() {
	double rand_;
	for (int i = 0; i < (NN.size() - 1); i++)
	{
		//cout << i << endl << endl;
		for (int j = 0; j < NN[i].size(); j++)
		{
			//cout << "\t" << main_v[i][j].value << endl;
			for (int k = 0; k < NN[i + 1].size(); k++)
			{
				rand_ = (double)rand() / RAND_MAX;
				rand_ = -1 + (rand_ * 2);

				NN[i][j].weight.push_back(rand_);
				//cout << "\t\t" << main_v[i][j].weight[k] << endl;
			}
		}
	}
}

void NeuralNet::Update() {
	double temp_val;
	for (int i = 1; i < NN.size(); i++)
	{
		//cout << i << endl;
		for (int j = 0; j < NN[i].size(); j++)
		{
			//cout << "\t" << j << endl;
			for (int k = 0; k < NN[i - 1].size(); k++)
			{
				//cout << "\t\t" << k << endl;

				NN[i][j].value = NN[i][j].value + ((NN[i - 1][k].value)*(NN[i - 1][k].weight[j]));
				//main_v[i][j].value = main_v[i][j].value + (main_v[i-1][k].value * main_v[i - 1][k].weight[j]);

				//cout << "\t\t\t" << main_v[i][j].value << endl;
			}
			NN[i][j].value = funct(NN[i][j].value);
		}
	}
}

void NeuralNet::Disp() {
	/*for (int i = 0; i < dim.size(); i++)
	cout << dim[i] << endl;*/
	cout << "Displaying neural network: " << endl << endl;
	cout << "Node" << "\t" << "Value" << "\t" << "Weights" << endl;
	for (int i = 0; i < NN.size(); i++)
	{
		cout << i << endl;
		for (int j = 0; j < NN[i].size(); j++)
		{
			cout << "\t" << NN[i][j].value << endl;
			for (int k = 0; k < NN[i][j].weight.size(); k++)
			{
				cout << "\t\t" << NN[i][j].weight[k] << endl;
			}
		}
		cout << endl;
	}
}