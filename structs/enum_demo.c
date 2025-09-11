// Enum Demo
// Date : 11-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum paymode {
      CASH = 100,
      UPI = 200,
      CARD = 400
};


void main ()
{
 enum paymode mode;

      mode = CASH;
      mode = CARD;


      if(mode == CASH)
      {
          // process  cash trans
      }

      printf("%d", mode);

}
