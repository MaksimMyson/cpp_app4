#include <iostream>
using namespace std;

int main() {
    double profit_by_month[12];

    cout << "Enter the profit for each of the 12 months:" << endl;
    for (int month = 0; month < 12; month++) {
        cout << "Month " << month + 1 << ": ";
        cin >> profit_by_month[month];
    }

    int start_month, end_month;
    cout << "Enter the start month of the range: ";
    cin >> start_month;
    cout << "Enter the end month of the range: ";
    cin >> end_month;

    double max_profit = profit_by_month[start_month - 1];
    double min_profit = profit_by_month[start_month - 1];
    int max_month = start_month;
    int min_month = start_month;

    for (int month = start_month; month <= end_month; month++) {
        if (profit_by_month[month - 1] > max_profit) {
            max_profit = profit_by_month[month - 1];
            max_month = month;
        }
        if (profit_by_month[month - 1] < min_profit) {
            min_profit = profit_by_month[month - 1];
            min_month = month;
        }
    }

    cout << "Month with the highest profit in the selected range: " << max_month << endl;
    cout << "Month with the lowest profit in the selected range: " << min_month << endl;

    return 0;
}