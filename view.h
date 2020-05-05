void initial_menu(){
    system("clear");
    printf("Bienvenido al sistema\n");
    printf("----------------------------\n");
    printf("\tMariana Carmona\n");
    printf("\tIván Guzmán\n");
    printf("\tElena Ginebra\n");
    printf("----------------------------\n");
    printf("Presione enter para comenzar...\n");
    getchar();
    system("clear");
}

void final_menu(){
    printf("Presione enter para continuar...\n");
    getchar();
}

int main_menu(){
    int op;

    system("clear");
    printf("¿Qué operación quieres realizar?\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. AND\n");
    printf("6. OR\n");
    printf("7. Salir\n");
    printf("Opción: \n");
    scanf("%d", &op);

    return op;
}

int inputs(char ){
    int num1, num2;

    system("clear");
    printf("Ingresa el primer número: \n");
    scanf("%d", &num1);
    printf("Ingresa el segundo número: \n");
    scanf("%d", &num2);

    return num1, num2;
}