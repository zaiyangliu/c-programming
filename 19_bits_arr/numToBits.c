#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int getNthBit(uint32_t number, int bit) {
  if (bit <0 || bit >= 32) {
    printf("Bit %d is invalid\n", bit);
    exit (EXIT_FAILURE);
  }
  return (number & (1<<bit)) != 0;
}

void numToBits(uint32_t * nums, int nNums, int * bits, int nBits) {

  
  if(nNums * 32  > nBits){
    
    printf("Invalid call to numToBits! nBits is %d, nNums is %d\n",nBits, nNums);
    
    return;
    
  }
  
  else{
    
    int j = 0;
    
    int currentNum = 0;
    
    int numberOfNumbers = nNums;
    

    
    while (numberOfNumbers > 0){
      
      // while there are still numbers to be turned to bits
      
      // for each number, place all of its 32 bits into *bits
      
      for (int i = 31; i >= 0; i--){
	
	bits[j] = getNthBit(nums[currentNum],i);
	
	// stores the 32 bits of the current number in nums to bits
	
	j++;
	
      }
      
      //j++;
      
      numberOfNumbers--;
      
      currentNum++;
      
    }
    
    return;
    
  }   
}

void doTest(uint32_t * nums, int n) {
  int bits[n *32];
  numToBits(nums, n, bits, n*32);
  for (int i =0; i < n; i++) {
    printf(" %9d (%8X) => ", nums[i], nums[i]);
    for (int j = 0; j < 32; j++) {
      printf("%d", bits[i*32 + j]);
    }
    printf("\n");
  }
}

int main(void) {
  uint32_t array1[] = { 1, 2, 3, 4, 5, 15, 109};
  uint32_t array2[] = { 123456789, 987654321 };
  int bits[7*32-1];
  doTest (array1, 7);
  doTest (array2, 2);
  numToBits(array1,7, bits , 7*32-1);
  return EXIT_SUCCESS;
}
