#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int res = 0;
	
	int sum = 0;
	int i = 0;
	while (sum < k) {
		if (v[i] > sum + 1)
		{
			res++;
			sum += sum + 1;
		}
		else
		{
			sum += v[i];
			i++;
		}

		if (i == n && sum < k)
		{
			v.push_back(sum + 1);
			res++;
		}
	}

	cout << res;

	return 0;
}