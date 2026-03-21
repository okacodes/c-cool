// NOTE: This can be split up into separate source files, or as a single header file

// Calculates and prints the areas of circles

#include <stdio.h>

// double circleularArea( double r );

int main()
{
    double radius = 1.0, area = 0.0;

    printf( "    Area of Circle:\n\n" );
    printf( "     Radius         Area:\n"
    "-------------------------\n" );
    
    area = circularArea( radius );
    printf( "%10.1f     %10.2f\n", radius, area );

    return 0;
}

// The function circularArea() calculates the area of a circle
// Parameter:
// The radius of the circle
// Return value: The area of the circle
double circularArea( double r )
{
const double pi = 3.1415926536;
return pi * r * r;
}

int open( const char *name, int mode, ... /* example of inline comment */);     // ... in this example indicates an optional parameter