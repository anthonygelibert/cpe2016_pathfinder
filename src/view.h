#ifndef VIEW_H
#define VIEW_H


#include "astar_pathfinding.h"
#include "graph_view_managment.h"
// #include <SDL/SDL_ttf.h>

void mainSDLLoop(int numRow, int numCol, char graph[numRow][numCol]);
int launchView(int numRow, int numCol, char graph[numRow][numCol]);

#endif /* VIEW_H */