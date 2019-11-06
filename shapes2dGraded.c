/*
	Name: Tyler Ailes
	Class: CSCI 155
	Date: Sept 11, 2019
	Desc: Calculates and prints the area of two different shapes
*/

#include <stdio.h>

int main (void){
    double pi_val = 3.14; // will be used for area of a circle
    double radius; // will be used for area of a circle
    double area_circle;
    double height; // will be used for area of a triangle
    double base; // will be used for area of a triangle
    double area_triangle;
    
    // area of a circle
    printf("Enter radius of your circle:\n");
    scanf("%lf", &radius);
    
    // area of a circle formula
    area_circle = pi_val * (radius * radius);
    
    // outputs results
    printf("The area of your circle is: %.2f\n\n", area_circle);
    
    // area of a triangle
    printf("Enter height of your triangle:\n");
    scanf("%lf", &height);
    printf("Enter base of your triangle:\n");
    scanf("%lf", &base);
    
    // area of a triangle formula
    area_triangle = (base * height) / 2.0;
    
    // outputs results
    printf("The area of your triangle is: %.2f\n", area_triangle);

    return 0;
}

/// style is exemplary