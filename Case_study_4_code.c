#include <stdio.h>

int main()
{
    float INR ,rate , USD ;
    
    //enter the ammount
    
    printf("Enter the amount in Indian rupees :");
    scanf("%f" , &INR);
    
    rate = 86;
    printf("Exchange rate = %f \n" , rate);
    
    USD = INR / rate ; 
    
    //printing the result 
    
    printf("Resulting ammount in US Dollars =%f" , USD);

    return 0;
}
