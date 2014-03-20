#include "../../domain.h"

inherit "/std/room";

void setup(void) {
   add_area("2.4.5");

   set_short("Tunnel");
   set_long("Tunnel fork.");

   add_exit("south", DIR + "/rooms/mine/tunnel19.c");
   add_exit("east", DIR + "/rooms/mine/tunnel23.c");
   add_exit("west", DIR + "/rooms/mine/tunnel21.c");
}
