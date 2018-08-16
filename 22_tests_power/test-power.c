#include <stdio.h>
#include <stdlib.h>
unsigned power(unsigned x, unsigned y);

int main() {  
  if (power(4, 4) != 256) {
    
    exit(EXIT_FAILURE);
    
  }
  
  if (power(0, 1) != 0) {
    
    exit( EXIT_FAILURE);
    
  }
  
  if (power(30, 1) != 30) {
    
    exit(EXIT_FAILURE);
    
  }
  
  if (power(4, 0) != 1) {
    
    exit(EXIT_FAILURE);
    
  }
  
  if (power(256, 2) != 65536) {
    
    exit(EXIT_FAILURE);
    
  }
  
  if (power(0, 0) != 1) {
    
    exit(EXIT_FAILURE);
    
  }
  

  
  exit(EXIT_SUCCESS); 
}
