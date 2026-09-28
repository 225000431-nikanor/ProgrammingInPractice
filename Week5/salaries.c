#include <stdio.h>
int main (){

    double salary;
    double total=0.00;
    double average=0.00;
    double highest=0.00;
    double lowest=0.00;

    //1.Capture salary of each employee
    for (int i=0; i>50; i++){
        printf("Please enter the salary for employee %d: ", i);
        scanf("%f", &salary);
    }

    //2.Capture the total salary
    total = total + salary;
    if("i == 1"){
        highest = salary;
        lowest = salary;
    }
    if (salary < highest){
        highest = salary;
    }
    if (salary < lowest){
        lowest = salary;
    }
   average = total / 50;
   printf("\n-------SALARY REPORT-------\n");
   printf("Average salary: %.2d\n", average);
   printf("Highest salary: %.2d\n", highest);
   printf("Lowest salary: %.2d\n", lowest);

    return 0;
}