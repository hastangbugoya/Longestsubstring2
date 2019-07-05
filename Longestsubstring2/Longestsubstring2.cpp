// Longestsubstring2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
	Compares substrings chunks at a time starting with the biggest chunk -> the shorter string and slowly decreases the chunk
	size until 2.  If 2 chunks are found equal one from the longer string and one from the shorter string the code stops
	and the longest equal "chunk" of string is found. - faster? cute is what we aim for.  If two substrings of equal length the first 
	one from the start of the string is "found". If want last substring - start from the tail end of the longer string.
*/

#include "pch.h"
#include <iostream>

int main()
{
	printf("Hello World!");
	//char string1[] = "bananax"; //"applesedndudbananases";
	//char string2[] = "bananawefewrwerseswapplesedsthdubanantasesaasd";
	char string1[] = "asasasasasasasbasadog"; 
	char string2[] = "vfvfvfvfvfbasfvdog";
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
		for (i = 0; notfound && i <= strlen(longer) - chunksize; i++)
		{
			for (j = 0; notfound && j <= strlen(shorter) - chunksize; j++)
			{
				//ctr++;
				for (k = 0; shorter[j + k] == longer[i + k] && k < chunksize; k++); //increment k while the substrings are still equal
				if (k == chunksize) //if k went all the way - the two chunks are equal
				{
					notfound = 0; //notfound gets false
					//display the substring - using the longer original string(offset i)
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
	if (notfound) printf("\nNo subtring of length 2 or greater found!");
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
