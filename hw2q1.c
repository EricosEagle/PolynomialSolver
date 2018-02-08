/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/*=========================================================================
  Constants and definitions:
==========================================================================*/





/*-------------------------------------------------------------------------
Calculate the roots of a polynomial
 -------------------------------------------------------------------------*/
int main()
{
    double a,b,c,root1,root2;
    printf("Enter a polynomial:\n");
    if (scanf("a=%lf,b=%lf,c=%lf", &a, &b, &c) != 3)
        return 1;
    if (b*b < 4*a*c || a == 0)
    {
        printf("There are no roots\n");
        return 0;
    }
    root1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    root2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    if (b*b > 4*a*c)
    {
        printf("Roots are %f, %f", root1,root2);
        return 0;
    }
    else if (b*b == 4*a*c)
    {
        printf("Root is %f", root1);
        return 0;
    }
    return 0;

}
