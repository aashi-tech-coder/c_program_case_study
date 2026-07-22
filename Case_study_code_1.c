#include <stdio.h>

int main(){
    float rice , milk, bread;
    float subtotal;
    float GST, final_bill;
    
    printf("Enter price of rice :");
    scanf("%f", &rice);
    
    printf("Enter price of milk :");
    scanf("%f", &milk);
    
    printf("Enter price of bread :");
    scanf("%f", &bread);
    
    subtotal = rice + milk + bread ;
    
    GST = (subtotal*18)/100;
    
    final_bill = subtotal + GST ;
    
    printf(" \nsubtotal = %f \n" , subtotal);
    printf(" GST = %f \n" , GST);
    printf(" Final bill = %f \n" , final_bill);
    

    return 0;
}
