// Programm for Multiplication Table. 

#include <stdio.h>

int main() {
    int number, rows;

    //Asking User for a Number.
    printf("Enter a Number: ");
    scanf("%d", &number);
    
    //Asking User how much rows needed.
    printf("Enter a Rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    
    {
        printf("%d x %d = %d\n", number, i, number*i);
    }

    return 0;

}
