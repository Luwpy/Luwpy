#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    //Variaveis
    float qtDia, qtMes, cptKilo = 0;
    int qtAnimais = 0; 
    int opcao = 0;
    const char animais[5][20] = { "Leopardo", "Zebra", "Girafa", "Arara", "Elefante", "Leao" };

    printf("Selecione uma opcao: \n");
    printf("[0] Leopardo   [1] Zebra \n\n[2] Girafa   [3] Arara \n\n[4] Elefante   [5]Leão\n\n");
    
    printf("Selecione o numero de um animal: ");
    scanf("%d", &opcao);
    
    printf("\n\nDigite o numero de animais: ");
    scanf("%d", &qtAnimais);
    
    printf("\n\nDigite o custo do quilo de comida: ");
    scanf("%d", &cptKilo);

    float animal[2] = {0, 0, cptKilo};
    // 0 = quantidade ao dia; 1 = quantidade ao mês; 2 = Custo por quilo.

    if(opcao == 0){
        //Leopardo
        animal[0] = 9;
        animal[1] = animal[0]*30;
    } else if (opcao == 1) {
        //Zebra
        animal[0] = 3;
        animal[1] = animal[0]*30;
    } else if (opcao == 2) {
        //Girafa
        animal[0] = 4;
        animal[1] = animal[0]*30;
    } else if (opcao == 3) {
        //Arara
        animal[0] = 0.7;
        animal[1] = animal[0]*30;
    } else if (opcao == 4) {
        //Elefante
        animal[0] = 26;
        animal[1] = animal[0]*30;
    } else if (opcao == 5) {
        //Leao
        animal[0] = 13;
        animal[1] = animal[0]*30;
    }  else {
        printf("Esse animal não está  registrado.");
        return 0;
    }
    
    float cptMes;
    cptMes = cptKilo*30;
    qtDia = animal[0]*qtAnimais;
    


    printf("Animal: %s\n", &animais[opcao]);
    printf("Quantidade por animal: %2.2f \n", &animal[0]);
    printf("Quantidade por dia: %2.2f \n", &qtDia);
    printf("Quantidade por mes: %2.2f \n", animal[1]);
    printf("Custo por kilo: %2.2f \n", &cptKilo);
    printf("Custo por mes: %2.2f \n", &cptMes);
    
    
    
    
    
    
    return 0;
}
