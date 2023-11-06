#include "gof.h"

grid_t* board = NULL; 
int main(int argc, char** argv){


	if(initBoard(board)){
		return -1;
	}

	
	clean(board);
	return 0;
}

