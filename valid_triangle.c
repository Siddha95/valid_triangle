#include <stdio.h>
#include <cs50>

bool valid_triangle( float a, float b, float c);

bool valid_triangle( float a, float b, float c) {
    // check if is not negative
    if ( a < 1 || b < 1 || c < 1) {
        return false;
    }
    // check if it can be a triangle 
    if ( a + b <= c || a + c <= b || b + c <= a ){
        return false;
    }
    // after these checks it should be a triangle
    return true;
}
