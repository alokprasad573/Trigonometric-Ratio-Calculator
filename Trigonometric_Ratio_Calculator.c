#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("Table of trigonometric ratios.\n");
    double degree, radian, complete_angle = 360.0;
    // const float pi=3.14;
    printf("  Enter Angle :- "); // computer always take angle as input as radian.
    scanf("%lf", &degree);
    if (complete_angle <= degree && degree <= 720)
    {
        degree = degree - complete_angle;
    }
    if (degree > 720)
    {
        for (int i = 1; i <= 100; i++)
        {
            degree -= 360;
            if (degree <= 360)
            {
                degree = degree;
                break;
            }
        }
    }
    /*Angle is in degree so we have convert it into radians.
      Angle of Trigonometric Function in programming is in radians.*/
    radian = degree * 3.14 / 180.0;
    printf("  Sin(%.2lf) = %.2lf\n", degree, sin(radian));
    printf("  Cos(%.2lf) = %.2lf\n", degree, cos(radian));

    (degree == 90 || degree == 270) ? printf("  Tan(%.2lf) = not defined.\n", degree) : printf(" Tan(%.2lf) = %.2lf\n", degree, tan(radian));
    (degree == 0 || degree == 180 || degree == 360) ? printf("  Cosec(%.2lf)= not defined\n", degree) : printf("  Cosec(%.2lf) = %.2lf\n", degree, 1 / sin(radian));
    (degree == 90 || degree == 270) ? printf("  Sec(%.2lf) = not defined.\n", degree) : printf(" Sec(%.2lf) = %.2lf\n", degree, 1 / cos(radian));
    (degree == 0 || degree == 180 || degree == 360) ? printf("  Cot(%.2lf)= not defined\n", degree) : printf("  Cot(%.2lf) = %.2lf\n", degree, 1 / tan(radian));
    return 0;
}