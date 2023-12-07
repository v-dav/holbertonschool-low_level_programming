#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char *search_for)
{
	int i;
	for(i = 0; i < 5; i++)
	{
		if (strstr(tracks[i], search_for))
			printf("Track is %d: %s\n", i, tracks[i]);
	}
}

int main(void)
{
	char search_for[80];
	search_for[strlen(search_for) - 1] = '\0';

	printf("Search for: ");
	scanf("%79s", search_for);
	find_track(search_for);

	return (0);
}
