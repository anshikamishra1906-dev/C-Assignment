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
   int Max=0;
   for(int i=1;i<size;i++)
      if(arry[i]>arry[idx]) {
        Max=i;
      }
   return Max;
}

int find_MinIndex(int arry[], int size) {
    int Min=0;
    for (int i=1;i<size;i++)
       if(arry[i]<arry[idx]) {
         Min=i;
       }
    return Min;
}

float find_average(int arry[], int size) {
   int sum=0;
   for(int i=0;i<size;i==) {
      sum+=arry[i];
   }
   return (float)sum/size;
}

int linearsearch(int arry[], int size, int value) {
   for(int i=0;i<size;i++)
      if(arry[i] == value)
      return i;
   return -1;
}

#include<stdio.h>
#include "anshika.h"

int main() {
   int num=4;
   //NUMBER FUNCTIONS
   printf("Number functions: /n");
   printf("%d is Armstrong? %s\n", num,is_armstrong(num) ? printf("Yes") : printf("No"));
