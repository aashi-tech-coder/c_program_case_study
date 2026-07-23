#include <stdio.h>

int main()
{
    float P , R , T , SI ;
    // P = principle ammount ,  R = rate of interest , 
    // T = time period , SI = simple interest 
    
    //enter your input
    printf("Enter your principle ammount :");
    scanf("%f" , &P);
    printf("Enter your interest rate :");
    scanf("%f" , &R);
    printf("Enter your time period :");
    scanf("%f" , &T);
    
    //calculating the SI
    SI = (P*R*T)/100;
    
    //display result
    printf("Your Simple Interest = %f" , SI);
    
    return 0;
}
