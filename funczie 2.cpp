#include <iostream>

using namespace std;


	double average(int arr[], int len)
	{
		double sum = 0;
		for (int i = 0; i < len; i++)
		{
			sum += arr[i];
		}
		return sum / len;
	}

	int main()
	{
		int arr[] = { 1, 2, 3, 4, 5 };
		int len = sizeof(arr) / sizeof(arr[0]);
		cout << average(arr, len) << endl;
		return 0;
	}


