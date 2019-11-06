/*
	Name: Tyler Ailes
	Class: CSCI 155
	Date: Sept 11, 2019
	Desc: Calculates and prints the volume and surface area of two shapes different shapes
*/

#include <stdio.h>

int main (void){
    double pi_val = 3.14; // used in torus equation
    double major_radius; // used in torus equations
    double minor_radius; // used in torus equations
    double surface_area_torus;
    double volume_torus; 
    double edge_length; // used in cube equations
    double surface_area_cube;
    double volume_cube;
    
    // surface area and volume of torus
    printf("Enter major radius of your torus: \n");
    scanf("%lf", &major_radius);
    printf("Enter minor radius of your torus: \n");
    scanf("%lf", &minor_radius);
    
    // equations for torus surface area and volume
    surface_area_torus = 4.0 * (pi_val * pi_val) * major_radius * minor_radius;
    volume_torus = 2.0 * (pi_val * pi_val) * major_radius * (minor_radius * minor_radius);
    
    // outputs results
    printf("The surface area of your torus is: %.2f\n", surface_area_torus);
    printf("The volume of your torus is: %.2f\n\n", volume_torus);
    
    // surface area and volume of a cube
    printf("Enter edge length of your cube: \n");
    scanf("%lf", &edge_length);
    
    // equations for cube surface area and volume
    surface_area_cube = 6.0 * (edge_length * edge_length);
    volume_cube = (edge_length * edge_length * edge_length);
    
    // outputs results
    printf("The surface area of your cube is: %.2f\n", surface_area_cube);
    printf("The volume of your cube is: %.2f\n", volume_cube);
    
    return 0;
}