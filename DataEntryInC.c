#include <stdio.h>

int main()
{
    char name[40];
    printf("Enter your name: ");
    scanf("%39s", name); //scanf will read up to 39 characters plus the string terminator \o

    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
//%i means the user will enter an int value.
//Use the & operator to get the address of the int

    char first_name[20];
    char last_name[20];
    printf("Enter first and last name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("First: %s Last:%s\n", first_name, last_name);
    

}
