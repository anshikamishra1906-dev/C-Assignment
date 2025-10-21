#ifndef ARRAYLIB_H
#define ARRAYLIB_H
void display_array(int arry[],int size);
void reverse_array(int arry[],int size);
void sort_array(int arry[],int size);
int find_MaxIndex(int arry[],int size);
int find_MinIndex(int arry[],int size);
float find_average(int arry[],int size);
int linearsearch(int arry[],int size,int value);
#endif

#include "arraylib.h"
#include <stdio.h>
void display_array(int arry[],int size) {
   for(int i=0;i<size;i++)
     printf("%d",arry[i]);
   printf("\n");
}

void reverse_array(int arry[],int size) {
   for(int i=0;i<size/2;i++) {
       int sri=arry[i];
       arry[i]=arry[size-1-i];
       arry[size-1-i]=sri;
   }
}

int find_MaxIndex(int arry[],int size) {
  int Max=0;
  for(int i=1;i<size;i++)
     if(arry[i]>arry[Max]) {
       Max=i;
     }
  return Max;
}

int find_MinIndex(int arry[],int size) {
  int Min=0;
  for(int i=1;i<size;i++)
     if(arry[i]<arry[Min]) {
       Min=i;
     }
  return Min;
}


  

