//Drawing simple pattern on terminal - mario more comfortable

#include <cs50.h>
#include <stdio.h>

void fullpyramidgenerator(int height);
void sidepyramidgenerator(int col, int row);

int main(void)
{
	int height;
	do
	{
		height = get_int("Enter height: ");
	}
	while(height < 0 || height > 23);
	
	fullpyramidgenerator(height);
	
}

void fullpyramidgenerator(int height)
{
	for (int row = 0; row < height; row++)
	{
		int col;
		// Generates spaces. At each iteration, space decreases by 1 space		
		for(col = height; col > row+1; col--)
		{
			printf(" ");
		}
		// Generates pyramid
		sidepyramidgenerator(col, row);
		printf(" ");
		sidepyramidgenerator(col, row);
		printf("\n");
	}
}

void sidepyramidgenerator(int col, int row)
{
	for (int col = 0; col < row+2; col++)
	{
		printf("#");
	}
}
