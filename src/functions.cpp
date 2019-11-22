#include "functions.h"

void print_message(const char* message){

  for(int i = 0; i < 8; i++){

   lcd::print(i, message);

  }
}

void clear_scr(){
  int x = 0;
  while(x < 8){
  lcd::clear_line(x);
  x += 1;
  }
  }
