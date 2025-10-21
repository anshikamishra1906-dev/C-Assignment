#include<stdio.h>
#include<math.h>
// reverse digits of a number
int reverse_digits(int num) {
  int r=0;
  while (num>0) {
      r=r*10+(num%10);
      num/=10;
  }
  return r;
}
//check if a number is armstrong or not
