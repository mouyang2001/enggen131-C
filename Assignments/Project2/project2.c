#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 8
#define NUM_COLS 8

#define SPACE 0
#define WALL -1
#define EXIT -2

void InitialiseRoad(int road[NUM_ROWS][NUM_COLS], char side, int pos)
{
	side = 0;
	pos = 0;
	road[0][0] = WALL;
	road[1][0] = WALL;
	road[2][0] = WALL;
	road[3][0] = WALL;
}

void PrintRoad(int road[NUM_ROWS][NUM_COLS])
{
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%d ", road[i][j]);
		}
		printf("\n");
	}
}

//double PercentUsed(int road[NUM_ROWS][NUM_COLS])
//{
//}

//void AddCar(int road[NUM_ROWS][NUM_COLS], int row, int col, int size)
//{
//}

//void FindCar(int road[NUM_ROWS][NUM_COLS], char move, int *rowStart, int *colStart, int *rowEnd, int *colEnd)
//{
//}

//int MoveCar(int road[NUM_ROWS][NUM_COLS], int r0, int c0, int r1, int c1)
//{
//}


/***********************************************************/
/***********************************************************/
/******* A SIMPLE MAIN FUNCTION TO TEST YOUR PROGRESS ******/
/***********************************************************/
/***********************************************************/

/* You should add your own tests in here */
int main(void)
{
	int road[NUM_ROWS][NUM_COLS];

	/* Simple test code for Tasks 1 and 2 */
	InitialiseRoad(road, 'E', 3);
	PrintRoad(road);

	return 0;
}
