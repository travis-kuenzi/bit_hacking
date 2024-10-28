#include <stdio.h>

#define LOW_WATER	(1 << 0)
#define HIGH_WATER 	(1 << 1)
#define LOW_LIGHT 	(1 << 2)
#define HIGH_LIGHT 	(1 << 3)
#define HOUSEPLANT 	(1 << 4)

int main()
{
	unsigned int plant = HOUSEPLANT;
	char c;


	printf("This program will help you decide which houseplant is right for you based on your conditions. \n Does your location recieve medium-bright light? [Y/N] ");

    	scanf(" %c", &c);
    	if (c == 'n' || c == 'N')
	{
		plant |= LOW_LIGHT;
	}
	else if (c == 'y' || c == 'Y')
	{
		plant |= HIGH_LIGHT;
	}

	
	printf("\nDo you want a plant that requires frequent watering? [Y/N] ");
    	scanf(" %c", &c);
    	if (c == 'y' || c == 'Y')
	{
		plant |= HIGH_WATER;
	}
	else if (c == 'n' || c == 'N')
	{
		plant |= LOW_WATER;
	}

	if (plant & LOW_WATER)
	{
		if (plant & LOW_LIGHT)
		{
			puts("Here are some houseplants that match your description of having low light	and low watering requirements:");
			puts("ZZ Plant\nSnake Plant\nParlor Palm");
		}
		if (plant & HIGH_LIGHT)
		{
			puts("Here are some houseplants that match your description of having medium-bright light and low watering requirements:");
			puts("Christmas Cactus\nSucculents\nJade Plant\nPony-Tail Palm\nDragon Tree");
		}

	}

	else if (plant & HIGH_WATER)
	{
		if (plant & LOW_LIGHT)
		{
			puts("Here are some houseplants that match your description of having low light and moderate watering requirements:");

			puts("Lucky Bamboo\nChinese Evergreen\nPeace Lily\nEnglish Ivy");
		}
		if (plant & HIGH_LIGHT)
		{
			puts("Here are some houseplants that match your description of having medium-bright light and moderate watering requirements:");

			puts("Areca Palm\nCoffee Plant\nElelphant Ear\nSpider Plant");
		}
	}

	printf("\nEnjoy your new houseplant!\n");

}

