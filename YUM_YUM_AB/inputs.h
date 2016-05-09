#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "player.h"

void checkInputs()
{
  if (buttons.pressed(DOWN_BUTTON))
  {

  }
  if (buttons.pressed(LEFT_BUTTON))
  {

  }
  if (buttons.pressed(UP_BUTTON))
  {

  }
  if (buttons.pressed(RIGHT_BUTTON))
  {

  }

  if (buttons.justPressed(A_BUTTON)) gameState = STATE_GAME_PAUSE;
  if (buttons.justPressed(B_BUTTON));
}


#endif
