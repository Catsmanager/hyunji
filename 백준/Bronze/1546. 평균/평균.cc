#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* scores = new int[N];
	int max = 0;
	double sum = 0.0;
	for (int i = 0; i < N; i++)
	{
		cin >> scores[i];
		if (scores[i] > max)
			max = scores[i];
	}
	for (int i = 0; i < N; i++)
		sum += (double)scores[i] / max * 100;
	double average = sum / N;
	cout.precision(10);
	cout <<fixed << average << endl;
	delete[] scores;

}