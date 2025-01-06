//Programm to show that a Person is Eligible to Vote or Not. 

#include <stdio.h>

int main() {
    int num;

    //Asks the User to Enter their Age.
    printf("Enter you Age: ");
    scanf("%d", &num);

    //If the Number is greater or equal to 18 then it will print 'If'.
    if(num>=18)
    {
        printf("You are Eligible to Vote");
    }
    
    //If the Number is less the 18 the it will print 'else'.
    else
    {
        printf("You are not Eligible to Vote");
    }
    return 0;
}