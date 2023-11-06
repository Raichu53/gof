#include "gof.h"

//return 0 if success
//initBoard(): initialize the game -> malloc() for grid_t entity 
//and all case_t entity
//TODO ou faire spawn les cases occupés de depart?
int initBoard(grid_t* g){

	g = (grid_t*)malloc(sizeof(grid_t));
	if(!g){
		printf("malloc() failed\n");
		return -1;
	}
	return 0;
}
//devrait free() tout ce que initBoard a alloué
void clean(grid_t* g){
	free(g);
}
//update du jeu 
void newFrame(grid_t* g){

}
