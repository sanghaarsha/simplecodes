#include <stdio.h>
#include <conio.h>

void main()
{
    int i,num,rev=0,sum,ini;
    printf("Enter a number:\n");
    scanf("%d",&num);
    ini=num;

    loop:
    if(num>0){
        sum=num%10;
        rev=rev*10+sum;
        num=num/10;
        if(num>0){
            goto loop;
        }
        else{
                printf("\nreverse of %d is %d",ini,rev);
                printf("\n");
                if(ini==rev){
                printf("\n%d is a palindrome",ini);}
                else{
                printf("\n%d is not a palindrome",ini);}
    getch();
        }
    }
    else
        printf("Enter a positive number.");

}
