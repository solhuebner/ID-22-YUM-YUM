#ifndef LEVELS_H
#define LEVELS_H

#include <Arduino.h>
#include "globals.h"



void drawMap()
{
  // FLOOR TILE
  sprites.drawPlusMask(16, 8, floorTile_plus_mask, 0);

  // WALL UPPER LEFT
  sprites.drawPlusMask(64, 8, wall_plus_mask, 0);  

  // WALL UPPER RIGHT
  sprites.drawPlusMask(96, 8, wall_plus_mask, 1);  

  // WALL LOWER LEFT
  sprites.drawPlusMask(64, 32, wall_plus_mask, 2);  

  // WALL LOWER RIGHT
  sprites.drawPlusMask(96, 32, wall_plus_mask, 3);  
}

#endif
