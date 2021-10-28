#include <bits/stdc++.h>
using namespace std;

int g1(int n)
{
	int i, j, k, arr[10] = {0};
	while (n)
	{
		arr[n % 10]++;
		n /= 10;
	}
	int ans = 0;
	for (i = 9; i >= 0; i--)
	{
		while (arr[i] != 0)
		{
			ans = ans * 10 + i;
			arr[i]--;
		}
	}
	return ans;
}

int g2(int n)
{
	int i, j, k, arr[10] = {0};
	while (n)
	{
		arr[n % 10]++;
		n /= 10;
	}
	int ans = 0;
	for (i = 1; i <= 9; i++)
	{
		while (arr[i] != 0)
		{
			ans = ans * 10 + i;
			arr[i]--;
		}
	}
	return ans;
}

int f1(int n)
{
	return (g1(n) - g2(n));
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> k;
	m = n;
	for (i = 1; i <= k; ++i)
	{
		m = f1(m);
	}
	cout << m << endl;
	return 0;
}
