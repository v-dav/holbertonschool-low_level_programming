#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to evaluate face values
 * 
 *Return: always 0
 */
int main()
{
	char card_name[3];
	int count = 0;
	int val = 0;
	
	do
	{
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		switch(card_name[0])
		{
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				break;
			default:
				val = atoi(card_name);
				if (val < 1 || val > 10)
				{
					puts("Error");
					continue;
				}
		}
			if ((val > 2) && (val < 7))
				count++;
			else if (val == 10)
				count--;
			printf("Current count: %d\n", count);
	}
	while (card_name[0] != 'X');
	return (0);
}

