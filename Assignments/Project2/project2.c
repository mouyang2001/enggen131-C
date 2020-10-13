#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 8
#define NUM_COLS 8

#define SPACE 0
#define WALL -1
#define EXIT -2

void InitialiseRoad(int road[NUM_ROWS][NUM_COLS], char side, int pos)
{
	// build walls and spaces
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			if (i == 0 || i == NUM_ROWS - 1 || j == 0 || j == NUM_COLS - 1) {
				road[i][j] = WALL;
			} else  {
				road[i][j] = SPACE;
			}
		}
	}

	// add exit
	if (side == 'N') {
		road[0][pos] = EXIT;
	} else if (side == 'E') {
		road[pos][NUM_COLS - 1] = EXIT;
	} else if (side == 'W') {
		road[pos][0] = EXIT;
	} else if (side == 'S') {
		road[NUM_ROWS - 1][pos] = EXIT;
	}
}

void PrintRoad(int road[NUM_ROWS][NUM_COLS])
{
	int i, j;
	for (i = 0; i < NUM_ROWS; i++) {
		for (j = 0; j < NUM_COLS; j++) {
			if (road[i][j] == WALL) {
				printf("%c", '#');
			} else if (road[i][j] == SPACE) {
				printf("%c", ' ');
			} else if (road[i][j] == EXIT) {
				printf("%c", 'O');
			}
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
