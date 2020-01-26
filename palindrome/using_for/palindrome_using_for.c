#include <stdio.h>
#include <conio.h>

void  main()
{
    int i,num,rev,sum=0,ini;
    printf("Enter a number:\n");
    scanf("%d",&num);
    ini=num; 

    for(i=num;i>0;){
        rev=i%10;
        sum=sum*10+rev;
        i=i/10;
    }

    printf("Reversed number: %d\n",sum);
    if(ini==sum)
        printf("\n%d is palindrome",ini);
    else
    printf("\n%d is not a palindrome",ini);
     getch();

}
