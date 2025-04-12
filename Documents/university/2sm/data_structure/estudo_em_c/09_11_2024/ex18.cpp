#include <stdio.h>
#include <stdlib.h>

struct Estoque{
    int code, quant;
    float price;
    char name [15];
};

int main(){
    int i = 0;
    int pointto, vendas, sair, compras;
    struct Estoque *armaz = (struct Estoque*) malloc(5 * sizeof(struct Estoque));

    if (armaz == NULL){
        printf("memoria não disponível");
        return 0;
    }
    else{
        for (i = 0; i < 5; i++){
            printf("insira o nome do produto (sem espaçamento)\n");
            scanf("%s", armaz[i].name);
            printf("insira o código do produto\n");
            scanf("%d", &armaz[i].code);
            printf("insira a quantidade em estoque\n");
            scanf("%d", &armaz[i].quant);
            printf("insira o preço\n");
            scanf("%f", &armaz[i].price);
            printf("Dados inseridos do produto:\n%s\n%d\n%d\n%.2f\n", armaz[i].name, armaz[i].code, armaz[i].quant, armaz[i].price);
        }
    }
    
    for ( i = 0; i < 100; i++){
        printf("Deseja computar um produto? digite 0 para sair\nDigite 1 para continuar\n");
        scanf("%d", &sair);
        if (sair == 0){
            return 0;
        }
        
        printf("qual produto deseja acessar? insira o código");
        scanf("%d", &pointto);

        for (int cont = 0; cont < 1; cont++){
            if (pointto == armaz[i].code){
                printf("produto tem estoque (%d)\n", armaz[i].quant);
                printf("deseja efetuar quantas compras?\t");
                scanf("%d", &compras);
                armaz[i].quant -= compras;

                if (armaz[i].quant < 0){
                    printf("\nErro| quantidade em estoque insuficiente|\n");
                    return 0;
                }
                printf("o produto agora tem %d no estoque\n", armaz[i].quant);
            }
        }
    }
    free(armaz);
}