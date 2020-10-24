#ifndef IX_MATH_HEADER
#define IX_MATH_HEADER

#define EXPORT __attribute__((__visibility__("default")))

typedef enum
{
    SUM,
    SUB,
    MULT,
    DIV
} operation;

typedef struct
{
    int error;
    double value;
} result_t;

EXPORT result_t compute(double a, double b, operation o);

#endif