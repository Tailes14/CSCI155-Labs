/*
    Name: Tyler Ailes
    Class: CSCI 155
    Date: Sept 18, 2019
    Desc: Creates a madlib based on user input
*/

#include <stdio.h>

int main (void){
    char first_name[20]; // limiting all inputs to 20 characters
    char color[20];
    char town[20];
    char number[20];
    char year[20];
    char action[20];
    
    // gathering inputs from user to be put into the madlib
    printf("Enter a first name:\n"); 
    scanf("%s", first_name);
    printf("Enter a color:\n");
    scanf("%s", color);
    printf("Enter a town (One word towns only):\n");
    scanf("%s", town);
    printf("Enter a number between 2 and 20:\n");
    scanf("%s", number);
    printf("Enter a year:\n");
    scanf("%s", year);
    printf("Enter an action (ending in -ing):\n");
    scanf("%s", action);
    
    printf("\n"); // spacing out the madlib from the inputs
    
    // outputs the madlib
    // \n commands throughout the text to keep it looking clean instead of a line of sentances
    printf("Mad Lib:\n");
    printf("The other day, %s was walking around %s. ", first_name, town);
    printf("Suddenly, %s kids jumped in \nfront of him %s like it was %s. ", number, action, year);
    printf("This shocked him and his face turned\n%s, then he passed out!\n", color);

    return 0;
}