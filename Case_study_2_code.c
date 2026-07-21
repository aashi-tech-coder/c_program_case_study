#include <stdio.h>

int main()
{
    float basicSalary, HRA, DA, NetSalary;

    // Input Basic Salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    //Calculate HRA 
    HRA = (basicSalary * 20) / 100;

    //Calculate DA 
    DA = (basicSalary * 40) / 100;

    //Calculate Net Salary
    NetSalary = basicSalary + HRA + DA;

    //Display the results
    printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basicSalary);
    printf("HRA (20%)    : %.2f\n", HRA);
    printf("DA (40%)     : %.2f\n", DA);
    printf("Net Salary   : %.2f\n", NetSalary);

    return 0;
}
