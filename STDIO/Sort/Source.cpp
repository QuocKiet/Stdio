#include <stdio.h>

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SelectionSort(int* arr, int n)
{
	
	for (int i = 0; i < n; i++)
	{
		int imin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[imin] > arr[j])
			{
				imin = j;
			}
		}
		if (i != imin)
		{
			Swap(arr[i], arr[imin]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
}

void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j>0; j--)
		{
			if (arr[j] < arr[j - 1])
				Swap(arr[j], arr[j - 1]);
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t", arr[i]);
	}
}

int BFSearch(int value, int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == n)
			return i;
	}
	return -1;
}

int BinarySearch(int value, int arr[], int n)
{
	int index = n / 2;
	if (arr[index] == value)
		return index;
	else
	{
		if (arr[index] > n)
		{
			index = n / 4;
		}
		else
		{
			index = n / 2 + n / 4;
		}
	}
	BinarySearch(value, arr, n);
}
int main()
{
	int a[6] = {1,2,3,4,5,6};
	//SelectionSort(a, 6);
	//BubbleSort(a, 6);
	/*for (int i = 0; i < 6; i++)
	{
		printf("\n%d\t", a[i]);
	}*/
	printf("%d", BinarySearch(5, a, 6));
	while (true);
	return 0;
}