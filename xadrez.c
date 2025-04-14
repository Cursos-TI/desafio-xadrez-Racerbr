#include <stdio.h>
 
int main() {
    
    int i = 0;
    int escolha;
    printf("### Jogo de xadrez ###\n");
    printf("Escolha sua peça:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &escolha);

    switch (escolha){
    // Após o usuário escolher a primeira opção, a torre se movimenta 5 casas para a direita
    case 1:
        for (i; i < 5; i++){
            printf("Torre: Direita\n");
        }
    break;
    // Após o usuário escolher a segunda opção, o bispo se movimenta cinco casas na diagonal para cima e à direita
    case 2:
        do{ 
            printf("Bispo: Cima, Direita!\n");
            i++;
        } while (i < 5);
    break;
    // Após o usuário escolher a terceira opção, a rainha se movimenta oito casas para a esquerda
    case 3:
        while (i < 8){
            printf("Rainha: Esquerda!\n");
            i++;
        }
    break;
    // Uma alternativa diferente das três resulta no fim do código e uma mensagem indicando o erro
    default:
        printf("Opção inválida! Tente novamente\n");
    break;
    }

   
    return 0;
}
