#include <stdio.h>
#include <stdlib.h>
#define N 10

/*选测排序法提高*/

int main() {
	int arr[10] = { 10,2,30,41,-5,16,73,876,9,-10 };
	int t;
	for (int i = 0; i < N - 1; i++)
	{
		int idx = i;
		for (int j = i + 1; j < N; j++)
		{
			if (arr[idx] > arr[j])
				idx = j;
		}
		if (idx != i)
		{
			arr[idx] ^= arr[i];
			arr[i] ^= arr[idx];
			arr[idx] ^= arr[i];
		}
	}
	
}


/*选测排序法*/
int main3() {
	int t;
	int arr[N] = { 1,-2,3,4,5,6,7,8,9,89 };
	for (int i = 0; i <= N-1 ; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;

			}
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
}




/*求最大值，最小值*/
int main2()
{
	int arr[10] = { 1,-2,3,4,5,6,7,8,9,89};
	int maxValue, minValue;
	maxValue = arr[0];
	minValue = arr[0];
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
	{
		if (arr[i] > maxValue)
			maxValue = arr[i];

		if (arr[i] < minValue)
			minValue = arr[i];
	}
	printf("Max Value = %d\n", maxValue);
	printf("MINI Value = %d", minValue);
	return 0;
}

/*求累加值*/
int main1(int argc, char* argv[])
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;

	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
	{
		sum += arr[i];
		printf("sum = %d\n", sum);

	}
	printf("*************************\n");
	printf("Sum = %d\n", sum);
	return 0;
}

