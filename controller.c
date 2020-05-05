#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "model.h"
#include "view.h"

int main()
{
    int op;
    float num[2];
    state_type previous_state, state;

    initial_menu();
    op = main_menu();
    system("clear");

    //Switchlike implementation
    state_type switchlike[] = {
        ADD,
        SUBSTRACT,
        DIVIDE,
        MULTIPLY,
        AND,
        OR};

    state = switchlike[op - 1];

    for (;;)
    {
        previous_state = state;
        if (state > NUM_STATES)
        {
            state = previous_state;
        }
        else
        {
            printf("Ingresa el primer número: \n");
            scanf("%f", &num[0]);
            printf("Ingresa el segundo número: \n");
            scanf("%f", &num[1]);
            printf("Resultado = %.2f\n\n", StateMachine[state].calc(num[0], num[1], &state));
            break;
        }
    }

    final_menu();
    return 0;
}
