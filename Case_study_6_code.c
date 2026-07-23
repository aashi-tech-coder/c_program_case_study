#include<stdio.h>
int main(){

    float C,F;
    // F = fahrenheit , c = celcius
    
    //enter input

    printf("Enter the  temperature in celsius");
    scanf("%f",&C);

     
    F=(9.0/5.0*C+32);
    
    //resulting fahrenheit
    
    printf(" fahrenheit = %f",F);
    
    return 0;
}
