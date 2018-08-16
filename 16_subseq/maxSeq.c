#include<stdio.h>
#include<stdlib.h>
size_t maxSeq(int * array, size_t n){
  if(n == 0 || array == NULL){
    return 0;
  }
  
  else{
    size_t max_num = 1;
    size_t now = 1;
    for(size_t i = 0; i < n; i++){
      if((array[i] < array[i+1])&& i < n-1){
        now++;
      }
      else{
	if(now > max_num){	
        max_num = now;
        now = 1;
	}
	else{
	  now = 1;
	}
      }
      
    }
   
    return max_num;
    
  }
  
}
