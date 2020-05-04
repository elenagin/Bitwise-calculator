#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

typedef enum
{
    A,
    B,
    C,
    NUM_STATES
} STATE;

typedef struct state_type{
    STATE current_state;
    float(*calc)(Float, float, STATE*states,...);
} StateMachineType;

StateMachineType StateMachine[NUM_STATES] = {
    {A, sm_a},
    {B, sm_b},
    {C, sm_c}
}


void statemachine_run(STATES *state)
{
    for(;;){
        previous_state = state;
        if (state > NUM_STATES){
            State = previous_state;
        } else{
            temp = (*StateMachine[state])(param1, param2, state);
        }
    }
}

float sm_a(){
    if(oper){
        *state=B;
    }
    e = rnad();
    if(e>Thres){
        *state = C;
    } 
}