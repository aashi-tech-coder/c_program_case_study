#include<stdio.h>
int main(){
    int weight,rate,total_charge;

    printf("Enter the Pakage weight :");
    scanf("%d",&weight);
    printf("Enter the cost per kg rate :");
    scanf("%d",&rate);

    total_charge = weight*rate;
    printf("Total charge =%d",total_charge);

    return 0;
}
