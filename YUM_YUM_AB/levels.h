#ifndef LEVELS_H
#define LEVELS_H

#include <Arduino.h>
#include "globals.h"





void drawMap()
{
  // FLOOR TILE
  sprites.drawPlusMask(0, 0, wallTiles_plus_mask, 0);
}

#endif
