#include<stdio.h>
#include<math.h>
int main() {
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
int is_armstrong(int num) {
  int ans=num, sum=0, count=0;
  int sri=num;
  while (sri>0) {
    count++;
    sri%10; 
  }
  sri=num;
  while(sri>0) {
      int a=sri%10;
      sum+=pow(a, count);
      sri/=10;
  }
  return sum==ans;
}

//check if a number is Adams number or not
int is_adams(int num) {
    int sq=num*num;
    return reverse_digits(sq) == reverse_digits(num)*reverse_digits(num);
}

//check if a number is prime or not
int is_prime(int num) {
  if(num<=1) return 0;
  for(int i=2;i*i<=num;i++)
    if(num%i==0) return 0;
  return 1;
}

//check if a number is prime and palindrome
int is_primepalindrome(int num) {
  return is_prime(num) && num==reverse_digits(num);
} 

int choice,num;
do{
  printf("1. Check if Armstrong\n");
  printf("2. Check if Adams\n");
  printf("3. Check if Prime Palindrome\n");
  printf("4. Exit\n");
  printf("Enter choice:");
  scanf("%d",&choice);
  if(choice==4) {
     printf("Program exit!");
     break;
  }
  printf("Entera num:");
  scanf("%d",&num);
  switch(choice) {
     case 1:
         if(is_armstrong(num))
           printf("%d is an armstrong number.\n",num);
         else
           printf("%d is not an armstrong number.\n"num);
         break;
     case 2:
         if(is_adams(num))
           printf("%d is an adams number.\n",num);
         else
           printf("%d is not an adams number.\n"num);
         break;
     case 3:
         if(is_primepalindrome(num))
           printf("%d is a prime palindrome number.\n",num);
         else
           printf("%d is not a prime palindrome number.\n"num);
         break;
     default:
           printf("Invalid choice! please select b/w 1-4");
   }
}while(choice != 4);
return 0;
}
