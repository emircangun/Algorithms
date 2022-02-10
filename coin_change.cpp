/*

Allen has a LOT of money. He has n dollars in the bank. For security reasons,
he wants to withdraw it in cash (we will not disclose the reasons here). The
denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number
of bills Allen could receive after withdrawing his entire balance?

*/

#include <iostream>
#include <algorithm>

using namespace std;

int coins[5] = {1, 5, 10, 20, 100};

int solve(int bill)
{
	int total = 0, i = 4;
	while (bill > 0)
	{
		if (coins[i] <= bill)
		{
			total++;
			bill -= coins[i];
		}
		else
		{
			i--;
		}
	}

	return total;
}

int main()
{
	int bill;
	cin >> bill;

	int res = solve(bill);
	cout << res;

	return 0;
}