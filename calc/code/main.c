#include <stdio.h>
#include <mymath.h>

int main()
{
    double a = 1;
    double b = 2;

    operation op = DIV;

    result_t s = compute(1, 2, op);

    if (!s.error)
    {
        printf("Operation result: %0.3f\n", s.value);
    }
    else
    {
        printf("Error on operation\n");
    }
}