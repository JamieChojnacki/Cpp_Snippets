#include <iostream>
#include "Entity.h"

int main() {

   Entity *pe = new Entity("jamie");

   pe->show();
   delete pe;

   return 0;
}