#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char assuntos[100000];
    int i;
    int abertos = 0;

    scanf("%s", &assuntos);

    for (i = 0; assuntos[i]; ++i)
    {
        if (assuntos[i] == ')' && abertos > 0)
        {
            abertos--;
        }
        if (assuntos[i] == '(')
        {
            abertos++;
        }
    }

    if (abertos > 0)
    {
        printf("Ainda temos %d assunto(s) pendente(s)!\n", abertos);
    }
    else
    {
        printf("Partiu RU!\n");
    }

    return 0;
}