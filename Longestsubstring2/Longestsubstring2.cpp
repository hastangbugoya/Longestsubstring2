// Longestsubstring2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	printf("Hello World!");
	char string1[] = "xbanana"; //"applesedndudbananases";
	char string2[] = "bananawefewrwerseswapplesedsthdubanantasesaasd";
	char *longer = string2, *shorter = string1;
	int chunksize, i, j, k, l;
	int notfound = 1;
	//int ctr = 0;
	if (strlen(string1) > strlen(string2))
	{
		longer = string1;
		shorter = string2;
	}
	chunksize = strlen(shorter);
	system("cls");
	while (notfound && chunksize >= 2)
	{
		for (i = 0; notfound && i < strlen(longer) - chunksize + 1; i++)
		{
			for (j = 0; notfound && j < strlen(shorter) - chunksize + 1; j++)
			{
				//ctr++;
				for (k = 0; shorter[j + k] == longer[i + k] && k < chunksize; k++);
				if (k == chunksize)
				{
					notfound = 0; //false
					printf("\n");
					for (l = 0; l < chunksize; l++)
					{
						printf("%c", longer[i + l]);
					};
				}
			}
		}
		chunksize--;
	}
	if (notfound) printf("\nNo subtring of lenght 2 or greater found!");
	//printf("\n%d", ctr);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
