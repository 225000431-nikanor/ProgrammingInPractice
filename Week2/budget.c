#include <stdio.h>
int main()
{
    int departments;
    double revenue, expenses, payroll, procurement, assets, balance;
    
    
    printf("Enter number of departments: ");
    scanf("%d", &departments);
    
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);
    
    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);
    
    printf("Enter Monthly Payroll: ");
    scanf("%lf", &payroll);
    
    printf("Enter Procurement Value: ");
    scanf("%lf", &procurement);
    
    printf("Enter Total Assets: ");
    scanf("%lf", &assets);
    
    balance = revenue - expenses;
    
    printf("Departments:        %d\n", departments);
    printf("Revenue:           N$ %.2f\n", revenue);
    printf("Expenses:          N$ %.2f\n", expenses);
    printf("Payroll:           N$ %.2f\n", payroll);
    printf("Procurement:       N$ %.2f\n", procurement);
    printf("Assets:            N$ %.2f\n", assets);
    printf("Budget Balance:    N$ %.2f\n", balance);
    
    return 0;
}