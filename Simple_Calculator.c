#include <stdio.h>
#include <math.h>
void print_menu(){
    printf("\nWelcome to Simple Calculator\n");
    printf("--------Please select your choice--------\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n6.Power\n7.Exit");
    printf("\nEnter your choice: ");
}
int main(){
    int ch;
    float a,b,result;
    do{
        print_menu();
        scanf("%d", &ch);
        if(ch!=7){
            if(ch>0 && ch<=7){
            printf("Enter the first number: ");
            scanf("%f", &a);
            printf("Enter the second number: ");
            scanf("%f", &b);
            switch(ch){
                case 1:
                    result = a+b;
                    printf("Sum of %.2f and %.2f = %.2f\n", a,b,result);
                    break;
                case 2:
                    result = a-b;
                    printf("Difference of %.2f and %.2f = %.2f\n", a,b,result);
                    break;
                case 3:
                    result = a*b;
                    printf("Product of %.2f and %.2f = %.2f\n", a,b,result);
                    break;
                case 4:
                    if(b!=0){
                        result = a/b;
                        printf("Quotient of %.2f and %.2f = %.2f\n", a,b,result);
                    }
                    else
                        printf("Division cannot be performed by zero\n");
                    break;
                case 5:
                    if(b!=0){
                        result = (int)a%(int)b;
                        printf("Modulus of %.2f and %.2f = %.2f\n", a,b,result);
                    }
                    else
                        printf("Modulus cannot be performed\n");
                    break;
                case 6:
                    result = pow(a,b);
                    printf("%.2f raised to %.2f = %.2f\n", a,b,result);
                    break;
            
        }
    }
    else
        printf("Enter the choice (1-7) only\n");
}
    }while(ch!=7);
    printf("Thank You for using the Calculator!!\n");
    printf("Developed by: Aatmik\n");
    return 0;
}