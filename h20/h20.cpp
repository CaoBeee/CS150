/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h20.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "dcao41"; // Add your Canvas/occ-email ID

#include "h20.h"

// Add your code here
void greenScreen(unsigned char * const img, int width, int height)
{
    unsigned char * p = img;
    unsigned char * end = img + 4 * width * height;
    while(p != end)
    {
        if( *(p + 1) > *p * 2 && *(p + 1) > *(p + 2) * 2)
        { 
            *p = *(p + 1) = *(p + 2) = *(p + 3) = 0;
        }
            p = p + 4;
    }
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    // Write your own tests here

    return 0;
}