// incluindo bibliotecas
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int agua, cafe, suco;
    char opcao_usuario;

    printf("tem agua?(s/n)");
    scanf("%c", &opcao_usuario);

    if (opcao_usuario == 's')
    {
        agua = 1;
    }
    else
    {
        agua = 0;
    }

    printf("tem cafe?(s/n)");
    scanf("%c", &opcao_usuario);

    if (opcao_usuario == 's')
    {
        cafe = 1;
    }
    else
    {
        cafe = 0;
    }

    printf("tem suco?(s/n)");
    scanf("%c", &opcao_usuario);

    if (opcao_usuario == 's')
    {
        suco = 1;
    }
    else
    {
        suco = 0;
    }

    if( agua == 1 && cafe == 1 ) {
        printf("Consigo fazer cafe\n");
    }

    if( agua == 1 || suco == 1 ) {
        printf("Consigo fazer suco!\n");
    }
    
    return 0;
}
