#include <stdio.h>

int main(void)
{
    char categoria;
    float prezzo;

    printf("Inserisci la categoria di cui fai parte\n");
    printf("|P=Pensionato S=Studente D=Disoccupato|\n");
    scanf("%c", &categoria);
    printf("Inserisci il prezzo del biglietto\n");
    scanf("%f", &prezzo);

    if (categoria == 'P' || categoria == 'p')
    {
        prezzo = prezzo - (prezzo/100)*10;
    }
    else if (categoria == 'S' || categoria == 's')
    {
        prezzo = prezzo - (prezzo/100)*15;
    }
    else if (categoria == 'D' || categoria == 'd')
    {
        prezzo = prezzo - (prezzo/100)*25;
    }
    else
    {
        printf("Non esiste quella categoria, riprova\n");
    }

    printf("Il biglietto costerà %.2f\n", prezzo);

    return 0;
}
