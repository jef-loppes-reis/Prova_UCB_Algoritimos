#include<stdio.h>
#include<math.h>

int main()
{

    printf("\nDiciplina: Algoritmos e Programação");
    printf("\nNome do Professor(a): Joyce Siqueira");
    printf("\nNome do aluno: Jefeson Lopes Reis");
    printf("\nMatricula: UC22200711");
    printf("\nCurso: Ciencia da Computação");
    printf("\nLink Repositorio GitHub: https://github.com/jef-loppes-reis/Prova_UCB_Algoritimos");
    printf("\nIDE utilizada: VSCODE e DEVC++ (Para compilar)");

    char questao;

    printf("\nDigite a questao: ");
    scanf("%s", &questao);

    switch (questao)
    {
    case 'a':
        
        int a, b, hipo, seno;

        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("\nDigite o valor de B: ");
        scanf("%d", &b);

        hipo = pow(b,2) + pow(b,2);
        hipo = sqrt(hipo);
        hipo = pow(hipo,2);

        seno = pow(a,2) / pow(b/2);

        printf("\nDados de entrada: \nA=%d\nB=%d", a, b);
        printf("\nSaida: \nHipotenusa: %d \nSeno %d", hipo, seno);

        break;
    
    case 'b':

        int ano;

        printf("Nome: ");
        printf("Ano de nascimento: ");
        scanf("%d", %ano);

        if (ano % 4 == 0 && ano % 100 != 0)
        
            print("O ano %d e bissexto !", ano);

        if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)

            printf("O ano %d e bissexto !", ano);

        else printf("O ano %d nao e bissexto !", ano);

    default break;
    }
}
