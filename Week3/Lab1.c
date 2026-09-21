#include <stdio.h>

int main(){

double basicSalary;
double housing;
double transport;
double tax;
double grossSalary;
double netSalary;

//1.Capture the basic salary
printf("Please enter basic salary: ");
scanf("%d", &basicSalary);

//2.Capture housing allowance
printf("Please enter housing allowance: ");
scanf("%d", &housing);

//3.Capture transport allowance
printf("Please enter transport allowance: ");
scanf("%d", &housing);

//4.Capture tax
printf("Please enter tax: ");
scanf("%d, &tax");

grossSalary = basicSalary + housing + transport;
netSalary = grossSalary - tax;

printf("\nGross Salary: %.2d\n", grossSalary);
printf("Net Salary: %.2f\n", netSalary);

return 0;
}