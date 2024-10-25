#include <iostream>
using namespace std;
#include<algorithm>
int main()
{
	int n;
	cin >> n;
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		int people;
		cin >> people;
		arr[i] = people;

	}
	sort(arr, arr + n);
	int num = 0;
	for (int i = 1; i < n; i++)
	{
		arr[i] = arr[i] + arr[i - 1];
		num = num + arr[i];
	}
	cout << num;
	return 0;
}