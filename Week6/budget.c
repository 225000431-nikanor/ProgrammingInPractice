#include <stdio.h>
#define SIZE 10
int main(){

//Variable declaration
double budgets[SIZE];
double total=0;
double average;
double temp;

//Capture the 10department budgets
for(int i=0; i<SIZE; i++){
    printf("Please enter budget for the departement N$ %d: ", i+1);
    if (scanf("%lf", &budgets[i]) !=1){
        printf("Invalid input, please enter a number only.\n");
        while(getchar() != '\n');
        i--;
    
    }
}
//Dsiplay all budgets
printf("\n ---ALL BUDGETS ---\n");
for(int i=0; i<SIZE; i++){
    printf("Department %d: %.2f\n", i+1, budgets[i]);
}

//Calculate the total budget
for(int i=1; i<SIZE; i++){
    total = total + budgets[i];
}
printf("\nTotal budget N$ : %.2f\n", total);

//Calculate the average budget
average= total / SIZE;
printf("Average budget N$ : %.2f\n", average);

//Sorting budget from lowest to highest(bubble sort)
for (int i=0; i<SIZE - 1; i++){
    for (int j =0; j<SIZE -1 - i; j++){
        if (budgets[j] > budgets[j+1]){
            temp=budgets[j];
            budgets[j]=budgets[j + 1];
            budgets[j + 1]=temp;    
            }
        }
    }
//Display sorted budgets 
printf("\n-- BUDGETS FROM LOWEST TO HIGHEST --\n");
for (int i=0; i < SIZE; i++){
    printf("%.2f\n", budgets[i]);
}  
return 0;  
}