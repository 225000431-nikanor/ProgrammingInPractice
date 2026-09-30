#include <stdio.h>
#include <string.h>

#define SIZE 20
#define LENGTH 20

int main(){

 // Variable declaration
 char regNumbers[SIZE][LENGTH];
 char searchReg[LENGTH];
 int found = 0;

 // Capture the 20 registration numbers
 for (int i = 0; i < SIZE; i++){
 printf("Please enter registration number %d: ", i + 1);
 scanf("%19s", regNumbers[i]);
 }
 // Display all registration numbers
 
    printf("\n--- ALL REGISTRATION NUMBERS ---\n");
   for (int i = 0; i < SIZE; i++){
    printf("%d. %s\n", i + 1, regNumbers[i]);
 }
 // Search for a registration number
    printf("\nPlease enter a registration number to search for: ");
    scanf("%19s", searchReg);
    for (int i = 0; i < SIZE; i++){
    if (strcmp(regNumbers[i], searchReg) == 0){
    printf("Registration number found at position %d.\n", i + 1);
 found = 1;
 }
 }
 if (found == 0){
 printf("Registration number not found.\n");
 }
 return 0;
}