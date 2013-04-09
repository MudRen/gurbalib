#include "../domain.h"

inherit "/std/room";

void setup(void) {
   add_area("2.4.5");

   set_short("Down the well");
   set_long("You are down the well.  It is wet and slippery.  " +
      "There is a lever beside a door to the west.");

   add_exit("north", DIR + "/rooms/maze/maze1.c");
   add_exit("up", DIR + "/rooms/narr_alley.c");

}

/* XXX Need to add the lever and do what it does... */
