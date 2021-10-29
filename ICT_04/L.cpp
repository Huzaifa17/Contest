#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	long long int a, b, sum = 0, total = 0;
	cin >> n;
	long long int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
		sum += (arr[i] * arr[i]);
		total += arr[i];
	}
	sum = (sum * (n - 1));
	for (i = 0; i < n; ++i)
	{
		total -= arr[i];
		sum -= (2 * arr[i] * total);
	}
	cout << sum << endl;
	return 0;
}
