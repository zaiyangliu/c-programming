int max (int num1, int num2) {
  int max;
  //check if num1 is greater than num2
  if( num1 > num2){
      max = num1;
    }
  else{
      max = num2;
    }
  //if so, your answer is num1
    //otherwise, your answer is num2
  return max;
  
}

int main(void) {
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %d\n", max(0x123456,123456));
  printf("max(0x451215AF and 0x91351AF) is %d\n", max(0x451215AF, 0x91351AF));
  //compute the max of 0x451215AF and 0x913591AF and print it out as a decimal number
  
  return 0;
}


