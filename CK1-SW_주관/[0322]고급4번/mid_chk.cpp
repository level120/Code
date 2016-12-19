#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	ifstream input("data.txt");
	int N;
	input >> N;
	int* data = new int[N];
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		input >> data[i];
		sum += data[i];
	}
	sort(data, &data[N]);
	float san = (float)sum / N;
	float mid = data[N / 2];
	float median = san > mid ? san - mid : mid - san;
	cout << median << endl;
	delete[] data;
	data = NULL;
	input.close();
	return 0;
}