#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "model.h"
#include "view.h"

int main()
{
    int op;

    initial_menu();

    while (op != 6)
    {
        op = main_menu();

        switch (switchOp)
        {
        case 1:
            ADD();
            getchar();
            break;
        case 2:
            SUBSTRACT();
            getchar();
            break;
        case 3:
            DIVIDE();
            getchar();
            break;
        case 4:
            MULTIPLY();
            getchar();
            break;
        case 5:
            OR();
            getchar();
            break;
        case 6:
            AND();
            getchar();
            break;
        }
        final_menu();
    }
    return 0;
}