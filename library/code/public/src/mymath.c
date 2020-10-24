#include "public/include/mymath.h"
#include "private/include/operations.h"

result_t compute(double a, double b, operation o)
{
    result_t result = {.error = 0 };

    switch (o)
    {
    case SUM:
        result.value = sum(a, b);
        break;
    case SUB:
        result.value = sub(a, b);
        break;
    case MULT:
        result.value = mult(a, b);
        break;
    case DIV:
        result.value = div(a, b);
        break;
    default:
        result.error = 1;
    }

    return result;
}