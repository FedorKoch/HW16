#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>


void fillingArray(int array[][4])
{
	for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				array[i][j] = i + j;
			}
		}
}
void arrayOutput(int array[][4])
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
}
void calendarSum(int array[][4]) // print the sum of the elements in the array row, the index of which is equal to the remainder of the division of the current calendar number by 4
{
	std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);

	int n = (now->tm_mday) % 4;

	std::cout << "The sum of elements in row, the index of which is equal to remainder of division of current calendar number by 4 = ";

	int sum = 0;
	for (int j = 0; j < 4; ++j)
	{
		sum += array[n][j];
	}
	std::cout << sum << "\n";
}

int main()
{
	int exampleArray[4][4];

	fillingArray(exampleArray);
	arrayOutput(exampleArray);
	calendarSum(exampleArray);
}
