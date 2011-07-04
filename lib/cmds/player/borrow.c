void usage() {
  write("Usage: borrow [-h] OBJ\n");
  write("Allows you to remove an object OBJ, " +
    "from storage.\n");
  write("Options:\n");
  write("\t-h\tHelp, this usage message.\n");
  write("See also: sell, buy, store\n");
}


void main( string str ) {

  if( !str || str == "" ) {
    usage();
    return;
  }
  if (sscanf(str, "-%s",str)) {
    usage();
    return;
  }

  if( !this_environment()->is_storage() ) {
    this_player()->write( "Perhaps you should try borrowing your item from a " +
      "storage?" );
    return;
  }

  this_environment()->borrow_object( str );
}

