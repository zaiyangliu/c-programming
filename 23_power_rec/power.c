#include<stdio.h>
unsigned power(unsigned x, unsigned y){
  if(y == 0)
    return 1;
  if(x == 0 && y == 0)
    return 1;
  else
    return x*power(x, y - 1);
}
