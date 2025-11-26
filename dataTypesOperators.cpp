#define _CRT_SECURE_NO_WARNINGS 
/*This directive is used to disable security warnings in Visual Studio for functions like scanf and strcpy,
this might solve compiling issues due to Scanf*/
#include <stdio.h> //Library for standard input and output in c++, always include this header file
#include <math.h> //Library for mathematical functions, such as pow() and sqrt()

//The main functions is where the program execution begins, 
//the argument is void because it does not receive any parameters, but also works without it
int main(void){
    int number; //Integer variables can store whole numbers
    float pi = 3.141592; //Float variables can store decimal numbers with single precision
    double radius; //Double variables can store decimal numbers with double precision
    char letter; //Char variables can store single characters
    char text[7]= "sphere"; //String variables can store a sequence of characters, 
    double volume1, volume2;
    // the number of characters must be defined in order to allocate memory
    printf("How many %s do you want to calculate?: ", text); //Prints a formatted string to the console
    scanf("%d", &number); //Reads an integer from the console and stores it in the variable number

    for (int i = 0; i < number; i++){ //For loop that iterates number times, we will learn more about loops later
        printf("Enter the radius of the %s %d: ", text, i+1);
        scanf("%lf", &radius);
        volume1= (4.0/3.0) * pi * radius * radius * radius; 
        volume2 = (4.0/3.0) * pi * pow(radius, 3);
        /*Here I want you to see that we can use either the product of radius 3 times or the function 
        pow from the library <math.h> that we installes before. And the result will be the same*/
        printf("The volume of the %s %d using radius*radius*radius is: %.2lf\n", text, i+1, volume1);
        printf("The volume of the %s %d using pow function is: %.2lf\n", text, i+1, volume2);
    }
    



    return 0; //Returns 0 to indicate that the program ended successfully

}