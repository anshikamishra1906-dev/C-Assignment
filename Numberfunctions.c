#include "anshika.h"
#include <stdio.h>
#include <math.h>

//Number Functions
int reverse_digits(int num) {
  int r=0;
  while (num>0) {
      r=r*10+(num%10);
      num/=10;
  }
  return r;
}

int is_armstrong(int num) {
  int ans=num, sum=0, count=0;
  int sri=num;
  while (sri>0) { count++, sri%10; }
  sri=num;
  while(sri>0) {
      int a=sri%10;
      sum+=pow(a, count);
      sri/=10;
  }
  return sum==ans;
}

int is_adams(int num) {
    int sq=num*num;
    return reverse_digits(sq) == reverse_digits(num)*reverse_digits(num);
}

int is_prime(int num) {
  if(num<=1) return 0;
  for(int i=2;i*i<=num;i++)
    if(num%i==0) return 0;
  return 1;
}

int is_primepalindrome(int num) {
  return is_prime(num) && num==reverse_digits(num);
}  
