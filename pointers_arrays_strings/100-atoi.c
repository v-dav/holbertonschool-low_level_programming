#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string to convert
 *
 * Return: an int
 */
int _atoi(char *s)
{
	int t = 0;
	int j = 0;
	int sign = 1;
	int resultat = 0;
	int nb_trouve = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	t--;
	while (j <= t)
	{
        	if (s[j] == '-' || s[j] == '+')
        	{
            		sign = 1 - 2 * (s[j++] == '-');
        	}
        
        	if (s[j] >= 48 && s[j] <= 57) 
        	{
            		resultat = resultat * 10 + ((int) s[j] - 48);
            		nb_trouve = 1;
        	}
        	else
        	{
            		if (nb_trouve == 1)
            		break;
        	}
        	j++;
    	}

	if (resultat > 0) 
    	{
        	if (sign == -1)
        	{    
            		return (resultat * (-1));
        	}
        	else
        	{
            		return (resultat);
        	}
    	}
    	else
        	return (0);
}
