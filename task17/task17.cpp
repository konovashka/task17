// Поиск строки матрицы с минимальной суммой 
//

#include <iostream>;
using namespace std;

int main()
{
	const int n = 3;
	const int m = 3;
	int arr[n][m] /*= {1,0,1,1,1,1,1,1,1}*/;
	int sum, min,number_min;
	min = INT_MAX;
	sum = 0;
	number_min = n + 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
		/*printf("%d\n", sum);*/
		if (sum<min)
		{
			number_min = i+1;
			min = sum;
			sum = 0;
		}
		else
		{
			sum = 0;
		}
	}
	printf("%d\n", min);
	printf("%d\n", number_min);
}
