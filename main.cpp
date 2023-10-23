#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	 const int SIZE = 5;
	 int numbers[SIZE];
	 for (int i = 0; i < SIZE; i++)
	 {
		 numbers[i] = rand() % 100 + 1;
		 cout << numbers[i] << " ";
	 }
	 cout << endl;


	  
	

	 int min, max;
	 min = max = numbers[0];
	 for (int i = 1; i < SIZE; i++)
	 {
		 if (numbers[i] < min)
			 min = numbers[i];
		 if (numbers[i] > max)
			 max = numbers[i];
	 }

	 cout << "The smallest number is " << min << endl;

	 cout << "The largest number is " << max << endl;
	return 0;
}

