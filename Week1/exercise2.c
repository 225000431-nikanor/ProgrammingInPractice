#include <stdio.h>
#include <string.h>

int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n\n");
    
    // Clear input buffer
    while (getchar() != '\n');
    
    printf("Enter Municipality Name: ");
    fgets(municipality, sizeof(municipality), stdin);
    // Remove newline character
    municipality[strcspn(municipality, "\n")] = 0;
    
    printf("Enter Mayor: ");
    fgets(mayor, sizeof(mayor), stdin);
    mayor[strcspn(mayor, "\n")] = 0;
    
    printf("Enter Population: ");
    scanf("%d", &population);
    
    printf("\n-----------------------------------\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor: %s\n", mayor);
    printf("Population: %d\n", population);
    
    return 0;
}