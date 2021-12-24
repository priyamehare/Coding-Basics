/*****************************************
Program to print PYRAMID Pattern
*****************************************/

#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d", &n);
  
  //Lopp for rows
  for(int i=1; i<=n; i++)
  {
      // Add Starting Spaces
      for(int s=1; s<=n-i+1; s++){
        printf(" ");
      }
    
     // * loop for each line
      for(int j=1; j<=i; j++){
        printf("* ");
      }
      printf("\n");
  }
  return 0;
}
