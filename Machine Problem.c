#include<stdio.h>

int main()
{
    int x[3][2];
    int id, pin;
    x[0][0]=1111;
    x[0][1]=123;
    x[1][0]=2222;
    x[1][1]=456;
    x[2][0]=3333;
    x[2][1]=789  ;

    printf("ID Number: ");
    scanf("%d", &id);
    printf("PIN CODE: ");
    scanf("%d", &pin);

    if(id==x[0][0] && pin==x[0][1])
    {
    printf("You have Successfully Logged In");
    printf("\nID#:1111");
    }else if(id==x[1][0] && pin==x[1][1])
    {
    printf("You have Successfully Logged In");
    printf("\nID#:2222");
    }else if(id==x[2][0] && pin==x[2][1])
    {
    printf("You have Successfully Logged In");
    printf("\nID#:3333");
    }else
    {
    printf("Invalid ID/PIN!");
    }

    return 0;
}
