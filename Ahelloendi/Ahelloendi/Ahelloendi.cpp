// Ahelloendi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct node {
	int id;
	struct node* pNext;
} list;

int GetInput(void);
//void PrintList(list *pHead);

int main()
{
    std::cout << "Hello World!\n"; 
	//list *pHead = NULL;
	int menu;
	while (true)
	{
		menu = GetInput();
		switch (menu)
		{
		case 0:
			puts("Case 0: Exiting...");
			/* Unload(pHead); */
			exit(0);
			break;
		case 1:
			puts("Case 1: N/A - function not yet implemented");
			/* PrintList(pHead); */
			break;
		case 2:
			/* insert node */
			puts("Case 2: N/A - function not yet implemented");
			break;
		case 3:
			/* find node */
			puts("Case 3: N/A - function not yet implemented");
			break;
		case 4:
			/* find node */
			puts("Case 4: N/A - function not yet implemented");
			break;
		case 5:
			/* erase node */
			puts("Case 5: N/A - function not yet implemented");
			break;
		case 6:
			/* erase node */
			puts("Case 6: N/A - function not yet implemented");
			break;
		default:
			puts("You should not be here.. this is sabotage!");
				break;
		}
	}
	return 0;
}

int GetInput()
{
	int input;
	puts("");
	while (true)
	{
		puts("Make your selection. Press the corresponding number and the enter key");
		puts("1 - Print list");
		puts("2 - Insert a node");
		puts("3 - Find a node by ID");
		puts("4 - Find a node by name");
		puts("5 - Erase a node by ID");
		puts("6 - Erase a node by name");
		puts("0 - Exit");
		printf("> ");
		scanf_s("%d", &input);
		puts("");
		if (input <= 6 && input >= 0)
			return input;
		printf("Input error!\n\n");
	}
}

//void PrintList(list *pHead)
//{
//	list *pTemp;
//	if (pHead)
//		for (pTemp = pHead; pTemp; PrintNode(pTemp), pTemp = pTemp->pNext);
//	else
//		puts("List empty");
//}


//void PrintNode(list *pNode)
//{
//	if (pNode == 0)
//	{
//		puts("anti nullviit");
//		exit(0);
//	}
//	{
//		printf("%d %s\n", (pNode)->id, (pNode)->name);
//	}
//}