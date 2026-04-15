#include "Tea.h"
#include "Coffee.h"


int main() {
   Beverage *tea = new Tea();
   Beverage *coffee = new Coffee();
   tea->prepare();
   coffee->prepare();
   return 0;
}