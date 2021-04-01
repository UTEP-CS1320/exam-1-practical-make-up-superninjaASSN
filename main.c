/*
*   EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (3/1/2021)
*/
#include <stdio.h>
#include <string.h>

int main(void) {

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Blood Pressure
     ***************************/
    
    // TODO: Fix the code below.
    // HINT: The code doesn't need big changes. Review the conditions and the outputs carefully.
    int sysP, diasP;

    // Read Systolic and Diastolic pressure
    scanf("%d %d", &sysP, &sysP);

    if(sysP < 120 && diasP < 80) {
      printf("Normal\n");
    } else if(sysP > 129 || diasP > 80) {
      printf("Elevated\n");
    } else if(sysP < 139 && diasP < 89) {
      printf("Stage 1 Hypertension");
    } else if(sysP > 140 && diasP > 90) {
      printf("Stage 1 Hypertension");
    } else {
      printf("Hypertensive Crysis");
    }
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Pokemon Damage
     ***************************/
    
    // TODO: Your P2 code goes here
    // Good luck!!
    
    /* Problem 2 End */
  } else if(opt == 3) {
    
   /***************************
     *  Problem 3: Shop
     ***************************/
    
    // TODO: Your P3 code goes here
    // Good luck!!
    
    /* Problem 3 End */
  }
}
