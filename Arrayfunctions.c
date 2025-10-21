#include "anshika.h"
#include <stdio.h>
#include <math.h>
void display_array(int arry[], int size) {
   printf("[");
   for(int i=0;i<size;i++) {
       printf("%d",arry[i]);
       if(i!=size-1) {
          printf(", ");
       }
   }
   printf("]\n");
}

void reverse_array(int arry[], int size) {
   for(int i=0;i<size/2;i++) {
       int sri=arry[i];
       arry[i]=arry[size-1-i];
       arry[size-1-i]=sri;
   }
}

int find_MaxIndex(int arry[], int size) {
  
      
