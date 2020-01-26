#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,rev,sum=0,ini;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    ini=num; 

    while(num)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }

    printf("The Reverse Number of %d is %d\n",ini,sum);
    if(ini==num)
        printf("\n%d is a palindrome",ini);
    else
        printf("\n%d is not a palindrome",ini);
    getch();
}
