/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2; 
  float average;
  
  printf("Enter the marks for subject 01 : ");
  scanf("%d", &mark1);

  printf("Enter the marks for subject 02 : ");
  scanf("%d", &mark2);

  average = (mark1 + mark2) / 2.0;

  printf("Average : %.2f", average);
  
  return 0;
}

