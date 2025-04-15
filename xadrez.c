#include <stdio.h>
 
int main() {
    
    int i = 0;
    int escolha;
    printf("### Jogo de xadrez ###\n");
    printf("Escolha sua peça:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
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
    case 4:
        
        int movimentoCompleto = 1;
        int escolha;

        printf("### Você escolheu o cavalo, agora, para qual direção você quer movimentá-lo? ###\n");
        printf("1. 2 casas para a vertical e depois 1 casa para a direita\n");
        printf("2. 2 casas para a vertical e depois 1 casa para a esquerda\n");
        printf("3. 2 casas para a horizontal e depois 1 casa para a direita\n");
        printf("4. 2 casas para a horizontal e depois 1 casa para a esquerda\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
        
            while (movimentoCompleto--){
                for (int i = 0; i < 2; i++){
                    printf("Vertical!\n");
                }
                printf("Direita!\n");
         }
        
            break;
            case 2:
        
                while (movimentoCompleto--){
                    for (int i = 0; i < 2; i++){
                        printf("Vertical!\n");
            }
                printf("Esquerda!\n");
         }
            break;
            case 3:
        
                while (movimentoCompleto--){
                    for (int i = 0; i < 2; i++){
                        printf("Horizontal!\n");
            }
                printf("Direita!\n");
         }
            break;
            case 4:
        
                while (movimentoCompleto--){
                    for (int i = 0; i < 2; i++){
                        printf("Horizontal!\n");
            }
                printf("Esquerda!\n");
         }
            break;
            default:
            printf("Opção inválida. Tente novamente\n");
            break;
        }
    break;

    
            // Uma alternativa diferente das três resulta no fim do código e uma mensagem indicando o erro
    default:
        printf("Opção inválida! Tente novamente\n");
    break;
    }

   
    return 0;
}
