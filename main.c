#include <stdio.h>

int main(void) {
    // Declaração de variáveis
    int tipoMaterialNumero;

    printf("=== Controle de Descarte - Guia de Reciclagem Comunitaria ===\n");

    // Menu de opções e entrada de dados do material
    printf("\nSelecione o tipo de material que voce deseja descartar digitando o numero correspondente:\n");
    printf("1 - Papel\n");
    printf("2 - Plastico\n");
    printf("3 - Vidro\n");
    printf("4 - Metal\n");
    printf("5 - Organico\n");
    printf("6 - Eletronico\n");
    printf("Digite sua opcao: ");
    scanf("%d", &tipoMaterialNumero);

    // Lógica condicional para orientar o descarte com base no número
    if (tipoMaterialNumero == 1) {
        printf("\n--- Orientacao para Papel ---\n");
        printf("Este material e RECICLAVEL.\n");
        printf("Descarte em lixeiras de coleta seletiva AZUL.\n");
        printf("Dica: Caixas de pizza engorduradas ou papel higienico usado NAO sao reciclaveis no papel!\n");
    } else if (tipoMaterialNumero == 2) {
        printf("\n--- Orientacao para Plastico ---\n");
        printf("Este material e RECICLAVEL.\n");
        printf("Descarte em lixeiras de coleta seletiva VERMELHA.\n");
        printf("Dica: Lave as embalagens plasticas antes de descartar para evitar odores e atrair pragas.\n");
    } else if (tipoMaterialNumero == 3) {
        printf("\n--- Orientacao para Vidro ---\n");
        printf("Este material e RECICLAVEL.\n");
        printf("Descarte em lixeiras de coleta seletiva VERDE.\n");
        printf("Dica: Vidros quebrados devem ser manuseados com cuidado e separados em embalagens seguras (ex: jornal, caixa de papelão) para evitar acidentes.\n");
    } else if (tipoMaterialNumero == 4) {
        printf("\n--- Orientacao para Metal ---\n");
        printf("Este material e RECICLAVEL.\n");
        printf("Descarte em lixeiras de coleta seletiva AMARELA.\n");
        printf("Dica: Latas de aerossol vazias geralmente são reciclaveis. Amasse as latas para economizar espaço.\n");
    } else if (tipoMaterialNumero == 5) {
        printf("\n--- Orientacao para Organico ---\n");
        printf("Este material NAO e reciclavel para a coleta comum.\n");
        printf("Alerta: O ideal e COMPOSTAR este material para produzir adubo rico em nutrientes para plantas!\n");
        printf("Procure programas de compostagem comunitaria ou inicie a sua propria para um descarte consciente.\n");
    } else if (tipoMaterialNumero == 6) {
        printf("\n--- Orientacao para Eletronico ---\n");
        printf("Este material NAO deve ser descartado no lixo comum, pois contem substancias toxicas.\n");
        printf("Procure pontos de coleta especificos para lixo eletronico (E-LIXO) em sua cidade ou região.\n");
        printf("Dica: Muitos fabricantes e lojas de eletronicos oferecem programas de descarte ou logistica reversa para produtos antigos.\n");
    } else {
        printf("\n Opcao invalida. Por favor, digite um numero de 1 a 6.\n");
        printf("Para outros materiais ou em caso de duvidas, consulte um guia de reciclagem mais abrangente da sua prefeitura ou cooperativa de reciclagem.\n");
    }

    return 0;
}