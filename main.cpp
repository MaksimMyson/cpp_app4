#include <iostream>
using namespace std;
int main()
{
	double montly_profit[12];
	double total_profit = 0;

	for (int month = 0; month < 12; month++)
	{
		cout << "Enter the profit for month " << month + 1 << ": ";
		cin >> montly_profit[month];
		total_profit += montly_profit[month];
	}
	cout << "The total profit for the 12 months is: " << total_profit << endl;

	int max_month, min_month;
	min_month = max_month = montly_profit[0];
	for (int month = 1; month < 12; month++)
	{
		if (montly_profit[month] > max_month)
		{
			max_month = montly_profit[month];
			max_month = month;
		}
		if (montly_profit[month] < min_month)
		{
			min_month = montly_profit[month];
			min_month = month;
		}
	}

	cout << "The month with the highest profit is: " << max_month + 1 << endl;

	cout << "The month with the lowest profit is: " << min_month + 1 << endl;


	return 0;
}