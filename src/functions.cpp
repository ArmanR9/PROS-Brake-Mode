#include "functions.h"

void print_message(const char* message){
  for (int i = 0; i < 8; i++) {
      lcd::print(i, message);
  }
}

void clear_scr(){
  for (int i = 0; i < 8; i++) {
      lcd::clear_line(i);
  }
}
