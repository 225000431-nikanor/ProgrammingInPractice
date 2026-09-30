#include <stdio.h>
int main(){

//Variable Declaration
//A. Employees salaries
double salaries[50];
double average;
double highest;
double lowest;
double searchSalary;
double total=0;
int found = 0;

//Capture the 50 salaries
for (int i = 0; i < 50; i++){
    printf("Please enter salary %d: ", i + 1);
    if (scanf("%lf", &salaries[i]) !=1;){
        printf("Invalid input, please enter a number only.\n");
        while (getchar() != '\n');
        i--;
        continue;
    }
    printf("Read: %.2f\n",, salaries[i]);
}

//Display all salaries 
printf("\n --ALL SALARIES --\n");
for(int i = 0; i<50; i++){
    printf("%.2f\n", salaries[i]);
}
highest=salaries[0];
lowest=salaries[0];

//Find the total, highest and lowest salaries
for(int i=0; i<50; i++){
    total = total + salaries[i];
    if(salaries[i] > highest){
        highest=salaries[i];
    } if(salaries[i]< lowest){
        lowest = salaries[i];
    }
}
// Calculate the average
average = total /50;
printf("\nAverage salary: %.2f\n", average);
printf("Highest salary: %.2f\n", highest);
printf("Lowest salary: %.2f\n", lowest);

//Search for salary
printf("\nPlease enter a salary to search for: ");
scanf("%lf", &searchSalary);

for(int i=0; i<50; i++){
    if(salaries[i]== searchSalary){
    printf("Salary found at position %d.\n", i +1);
  found=1; 
   } 
}
if (found==0){
    printf("Salary not found.\n");
}
return 0;
}   
