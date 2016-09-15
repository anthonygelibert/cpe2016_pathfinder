#ifndef GRAPH_VIEW_MANAGMENT_H
#define GRAPH_VIEW_MANAGMENT_H

#include "sdl_drawing.h"


#define POS_START_X 5
#define POS_START_Y 5
#define SIZE_X 25
#define SIZE_Y 25
#define OFFSET_X 5
#define OFFSET_Y 5
#define POS_BUTTON_X 300
#define POS_BUTTON_Y 300
#define SIZE_BUTTON_X 80
#define SIZE_BUTTON_Y 40


void sdlInit();
void createGraph(int numRow, int numCol, char graph[numRow][numCol]);
void drawFinalPath(int finalPathLength, int numRow, int numCol, Coordinates finalPath[numRow][numCol]);
int findPathButtonClicked(Coordinates cursorPosition);
#endif
