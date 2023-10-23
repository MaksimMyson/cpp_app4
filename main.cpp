#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size];
	
	cout << "Enter" << size << "integres:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Array in reverse order:" << endl;

	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}

