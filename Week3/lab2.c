#include <stdio.h>

int main(){
 
char supplierName[50];
double price;
double budget;
int registered;
int documentsComplete;

//1.Capture supplier name
printf("Please enter supplier name: ");
scanf("%49s", &supplierName);

//2.Capture the tender price
printf("Please enter tender price: ");
scanf("%d", &price);

//3.Capture available budget
printf("Please enter available budget: ");
scanf("%d", &budget);

//4.Capture registration status
printf("Is supplier registered? (1=Yes, 0=No): "); 
scanf("%d", &registered);

//5.Capture document completion
printf("Are all documents completed? (1=Yes, 0=No): ");
scanf("%d", &documentsComplete);

if (registered ==0 || documentsComplete==0){
   printf("\nSupplier: %s/n" , supplierName);
   printf("Status: Disqualified\n"); 
}
else if (price > budget){
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Disqualified");
}else{
    printf("\nSupplier: %s/n", supplierName);
    printf("Status: Qualified\n");
}
return 0;


}