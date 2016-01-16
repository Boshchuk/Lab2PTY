// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int newGenerated;
	const int n = 4;
	const int m = 5;
	const int allSize = 20;


	// ќбъ€вл€ем двумерный массив
	int myArr[n][m];

	srand(time(0)); // автоматическа€ рандомизаци€



	int usedNumbers[allSize];

	for (int i = 0; i < allSize; i++)
	{
		usedNumbers[i] = -1;
	}


	int usedNumbersIterator = 0;

	bool needGenerate = true;

	// »нициализируем данный массив
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			while (needGenerate)
			{
				newGenerated = 1 + rand() % 40;

				needGenerate = false;
				for (int i = 0; i < usedNumbersIterator; i++)
				{
					if (usedNumbers[i] == newGenerated)
					{
						needGenerate = true;
					}
				}

			}

			myArr[i][j] = newGenerated;

			usedNumbers[usedNumbersIterator] = newGenerated;
			usedNumbersIterator++;

			needGenerate = true;
		}
	}

	/* вывод чисел */
	for (int t = 0; t<n; ++t)
	{
		for (int y = 0; y < m; ++y) {
			printf("%d  ", myArr[t][y]);
		}
		printf("\n");
	}

	return 0;
}

