#ifndef LEVELS_H
#define LEVELS_H

#include <Arduino.h>
#include "globals.h"





void drawMap()
{
  // FLOOR TILE
  for (byte y = 0; y < 9; y++)
  {
    for (byte x = 0; x < 10; x++)
    {
      sprites.drawPlusMask((x * 16)-(y*4) -4 , (y *8) - 8, wallTiles_plus_mask, pgm_read_byte(&tilemap00[x + (10*y)]));
    }
  }
}

#endif
