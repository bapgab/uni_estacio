#include <stdio.h>
#include <stdlib.h>

    //Declaração da struct dados, vai ser usada depois em int main.
struct Dados{
    char dpri[50];
    int hr, min;
    int dia, mes, ano;
};

    //recebe os valores da struct dados depois que o int main chamar a função
struct Dados novocdados (int i, struct Dados *cdados){
    
    printf("descrição (sem espaçamento)\n");
    scanf(" %s", cdados[i].dpri);
    printf("horário (as horas) \n");
    scanf("%d", &cdados[i].hr);
    printf("horário (os minutos) \n");
    scanf("%d", &cdados[i].min);
    printf("dia \n");
    scanf("%d", &cdados[i].dia);
    printf("mes \n");
    scanf("%d", &cdados[i].mes);
    printf("ano \n");
    scanf("%d", &cdados[i].ano);

    return *cdados;
}
int main(){
    int n = 0;

    struct Dados *cdados;

    printf("insira a quantidade de compromissos que serão enviados: ");
    scanf("%d", &n);

        //recebe as datas de acordo com a quantidade que o usuário digitou (chamando a função recebd())
        //imprime os dados antes de repetir
        //repete enquanto a o contador for diferente do número inserido pelo usuário
    for (int i = 0; i != n; i++){
        novocdados(i, cdados);
        printf("datas:\n");
        printf("%s\n", cdados[i].dpri);
        printf("%d:", cdados[i].hr);
        printf("%d\n", cdados[i].min);
        printf("%d/", cdados[i].dia);
        printf("%d/", cdados[i].mes);
        printf("%d\n", cdados[i].ano);
    }

}
