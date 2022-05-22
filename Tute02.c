/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float amount;
  int distance, first, second;
  
  printf("Enter the distance : ");
  scanf("%d", &distance);

  if(distance > 30)
  {
    first = 30;
  }
  else
  {
    first = distance;
  }

  if(first >= 30)
  {
    second = distance - first;
  }
  else
  {
    second = 0;
  }

  amount = (first * 50) + (second * 40);

  printf("Amount : %.2f", amount);
  
  return 0;
}
