#include<iostream>

using namespace std;

int main()
{
	//WRITE A C++ PROGRAM TO PRINT THE COUNT AND SUM OF ALL THE INTEGER NUMBERS THAT AREDIVISIBLE BY 9 IN THE RANGE 1 TO 200. EXCEPT ODD NUMBERS
	
	int count = 0, sum = 0;

	int i = 1;
	while (i <= 200)
	{
		if (i % 9 == 0 && i % 2 == 0)
		{
			count++;
			sum += i;
		}

		i++;
	}
	
	cout << "The sum of all these nubmers is : " << sum << endl;

	return 0;
}