#include <stdio.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

void display(island *start)
{
	island *i = start;

	for (;i != NULL; i = i -> next)
		printf("Name: %s is open: %s-%s\n", i->name, i->opens, i->closes);
}

int main (void)
{
	island amity = {"Amity", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
	island shutter = {"Shutter", "09:00", "17:00", NULL};	
	island skull = {"Skull", "07:00", "20:00", NULL};

	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;

	isla_nublar.next = &skull;
	skull.next = &shutter;
	
	
	display(&amity);
	return (0);
}
