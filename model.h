#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>


enum STATE
{
    ADD,
    SUBSTRACT,
    DIVIDE,
    MULTIPLY,
    AND,
    OR,
    NUM_STATES
};

typedef enum STATE state_type;


typedef struct state_M
{
    state_type current_state;
    float (*calc)(float, float, state_type *, ...);
} StateMachineType;


float sm_add(float n1, float n2, state_type *state)
{
    return n1 + n2;
}

float sm_substract(float n1, float n2, state_type *state)
{
    return n1 - n2;
}

float sm_divide(float n1, float n2, state_type *state)
{
    return n1 / n2;
}

float sm_multiply(float n1, float n2, state_type *state)
{
    return n1 * n2;
}

float sm_and(float n1, float n2, state_type *state)
{
    int temp;
    temp = (int)n1 & (int)n2;
    return (float)temp;
}

float sm_or(float n1, float n2, state_type *state)
{
    int temp;
    temp = (int)n1 | (int)n2;
    return (float)temp;
}

StateMachineType StateMachine[NUM_STATES] = {
    {ADD, sm_add},
    {SUBSTRACT, sm_substract},
    {DIVIDE, sm_divide},
    {MULTIPLY, sm_multiply},
    {AND, sm_and},
    {OR, sm_or}};