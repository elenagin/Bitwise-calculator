#include "functions.h"

int sm_add(int n1, int n2, state_type *state)
{
    return n1 + n2;
}

int sm_substract(int n1, int n2, state_type *state)
{
    return n1 - n2;
}

int sm_divide(int n1, int n2, state_type *state)
{
    return n1 / n2;
}

int sm_multiply(int n1, int n2, state_type *state)
{
    return n1 * n2;
}

int sm_and(int n1, int n2, state_type *state)
{
    return n1 & n2;
}

int sm_or(int n1, int n2, state_type *state)
{
    return n1 | n2;
}