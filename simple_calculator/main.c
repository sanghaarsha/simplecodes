#include <stdio.h>
#include <conio.h>

void main()
{
    float a,b;
    char op;
    printf("This is a simple calculator app.\nIt's calculations are limited to only two numbers.\n");
    printf("\n");
    printf("Enter:\n'+' to add.\n'-' to subtract.\n'*' to multiply.\n'/' to divide.\n");
    scanf("%c",&op);
    printf("\n");
    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);

    switch(op){
    case '+':
        printf("%0.1f + %0.1f = %0.1f\n",a,b,a+b);
        break;
    case '-':
        printf("%0.1f - %0.1f = %0.1f\n",a,b,a-b);
        break;
    case '*':
        printf("%0.1f x %0.1f = %0.1f\n",a,b,a*b);
        break;
    case '/':
        printf("%0.1f / %0.1f = %0.1f\n",a,b,a/b);
        break;
    default:
        printf("Enter a valid value.");

    }
    getch();
}
