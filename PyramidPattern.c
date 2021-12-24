/*****************************************
Program to print PYRAMID Pattern
*****************************************/

#include<stdio.h>
int main(){
  int n;
  
  // Get value for Pyramid height from user.
  printf("Enter number:");
  scanf("%d", &n);
  
  //Loop for rows
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
