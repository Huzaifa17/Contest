#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j = 2, k, t;
	long long int n, m, count = 0, p;
	std::vector<long long int> v;
	cin >> n;
	for (i = 2; pow(i, j) <= n; ++i)
	{
		m = pow(i, j);
		while (m <= n)
		{
			j++;
			v.push_back(m);
			m = pow(i, j);
		}
		j = 2;
	}
	sort(v.begin(), v.end());
	if (v.size() > 0)
	{
		count = 1;
	}
	for (i = 1; i < v.size(); ++i)
	{
		if (v[i] != v[i - 1])
		{
			count++;
		}
	}
	cout << n - count << endl;
	return 0;
}
