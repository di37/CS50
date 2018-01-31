//Drawing simple pattern on terminal - mario pyramid less comfortable
 
#include <cs50.h>
#include <stdio.h>

void pyramidgenerator(int height);

int main(void)
{
	int height;
	do
	{
		height = get_int("Enter height: ");
	}
	while(height < 0 || height > 23);
	
	pyramidgenerator(height);
	
}

void pyramidgenerator(int height)
{
	for (int row = 0; row < height; row++)
	{
		// Generates spaces. At each iteration, space decreases by 1 space		
		for(int col = height; col > row+1; col--)
		{
			printf(" ");
		}
		// Generates pyramid
		for (int col = 0; col < row+2; col++)
		{
			printf("#");
		}
		printf("\n");
	}
}
