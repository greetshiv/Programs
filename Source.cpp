#include <iostream>
using namespace std;

int * modifiedArray(int arr[], int n)
{
	int *resultArray = NULL;
	resultArray = new int[n];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1] && arr[i] != 0)
		{
			arr[i] = 2 * arr[i];
			arr[i + 1] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			resultArray[j] = arr[i];
			j++;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (resultArray[i] < 1)
			resultArray[i] = 0;
	}

	return resultArray;
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int T, N, arrValues;
	cin >> T;
	cin >> N;
	while (T--)
	{
		int *arr = NULL;
		arr = new int[N];
		for (int i = 0; i < N; i++)
		{
			cin >> arrValues;
			arr[i] = arrValues;
		}
		int *result = modifiedArray(arr, N);
		printArray(result, N);
	}

	return 0;

}