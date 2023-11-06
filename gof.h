#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 20

typedef struct Case{

	int id;
	_Bool bIsAlive;
	struct Case* neighbours[8];
}case_t;

typedef struct Grid{

	case_t* layout[SIZE][SIZE];
}grid_t;

int initBoard(grid_t* board);
void clean(grid_t* g);

extern grid_t* board;
