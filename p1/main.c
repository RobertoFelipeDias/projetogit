#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Hello world!\n");
    printf("inclus�o de nova linha usuario A");
    return 0;
}
