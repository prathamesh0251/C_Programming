

#include <stdio.h>

double CircleArea(float Radius)
{
    double PI = 3.14;
    double Area = PI * Radius * Radius;
    return Area;
}

int main()
{
    float Value = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &Value);

    dRet = CircleArea(Value);

    printf("Area of circle is: %.4lf\n", dRet);
    return 0;
}
