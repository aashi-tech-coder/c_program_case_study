#include <stdio.h>

int main(){
    int S1 , S2 , S3 , S4 , S5;
    float total , average , percentage ;
    
    //Taking the marks of subjects from te user
    printf("Enter the marks of S1 :");
    scanf("%d" , &S1);
    printf("Enter the marks of S2 : ");
    scanf("%d" , &S2);
    printf("Enter the marks of S3 : ");
    scanf("%d" , &S3);
    printf("Enter the marks of S4 : ");
    scanf("%d" , &S4);
    printf("Enter the marks of S5 : ");
    scanf("%d" , &S5);
    
    //Calculatng the total of the marks
    
    total = S1 + S2 + S3 + S4 + S5;
    average = total/100;
    percentage = (total/500)*100;
    
    //Display all the result
    
    printf("Total marks of all the subjects :%f \n", total);
    printf("The average of marks is :%f \n" , average);
    printf("The percentage of marks is :%f \n" , percentage);
    
    
    
    return 0;
}
