#include <iostream>
#include <assert.h>
#include <string.h> // for memcmp!
/*
  void swapPtrVals(void** a, void** b)
  ---------------------------------------------------
  Swaps the values of each pointer - any pointer
  passed to this function must be cast as a (void**)
  for generality!
*/
void swapPtrVals(void** a, void** b){
  void *tempPtrStorage = *a;    // dereference the void**
  *a = *b;
  *b = tempPtrStorage;
}

int main(){
   std::cout << "HELLO LIAM" << std::endl;
   return 0;
}
