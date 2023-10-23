#include <iostream>
using namespace std;

int main()
{
	double montly_profit[6];
	double total_profit = 0;

	for ( int month = 0; month < 6; month++)
	{
		cout << "Enter the profit for month " << month + 1 << ": ";
		cin >> montly_profit[month];
		total_profit += montly_profit[month];
	}
	cout << "The total profit for the 6 months is: " << total_profit << endl;
	

	return 0;
}

