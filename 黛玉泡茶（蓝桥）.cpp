#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int cupnum, bottlevolum, goalnum;
	cin >> cupnum;
	cin >> bottlevolum;
	cin >> goalnum;
	int n = cupnum;
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int num = 0; int sumgoalvolum = 0;
	for (int i = 0; i < goalnum; i++)
	{
		sumgoalvolum = arr[i] + sumgoalvolum;
	}
	num = sumgoalvolum / bottlevolum;
	if (sumgoalvolum - num * bottlevolum == 0)cout << num;
	else cout << num + 1;
	return 0;
}