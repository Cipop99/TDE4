#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int casos, i, c;
    char retirada[1000];

    scanf("%d", &casos);

    for (c = 0; c < casos; c++)
    {
        int Diamantes = 0;
        int firstHalf = 0;

        scanf("%s", &retirada);

        for (i = 0; retirada[i]; ++i)
        {
            if (retirada[i] == '<')
            {
                firstHalf++;
            }
            if (retirada[i + 1] == '>' && firstHalf > 0)
            {
                firstHalf--;
                Diamantes++;
            }
        }

        printf("%d\n", Diamantes);
    }

    return 0;
}