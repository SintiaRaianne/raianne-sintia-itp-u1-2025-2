#include <stdio.h>

// Função que converte para o formato 24h
void formato24h(int horas, int minutos) {

    horas = (horas + minutos / 60);      
    minutos = minutos % 60;       
    horas = horas % 24;

    printf("%02i:%02i\n", horas, minutos);
}

// Função que converte para o formato 12h
void formato12h(int horas, int minutos) {

    horas = (horas + minutos / 60);      
    minutos = minutos % 60;       
    horas = horas % 24;
    
    char periodo[3];
    int horas12;

    // Determinar o periodo e converter o horario
    
    if (horas == 0) {
        horas12 = 12;
        sprintf(periodo, "AM");
    } else if (horas == 12) {
        horas12 = 12;
        sprintf(periodo, "PM");
    } else if (horas > 12) {
        horas12 = horas - 12;
        sprintf(periodo, "PM");
    } else {
        horas12 = horas;
        sprintf(periodo, "AM");
    }
    
    printf("%02i:%02i %s\n", horas12, minutos, periodo);
}

int main() {

    int horas, minutos, formato;

    scanf("%i %i %i", &horas, &minutos, &formato);

    // Array com os acréscimos em minutos
    int acrescimos_horas[] = {0, 1, 2, 4, 12};

    int acrescimos_minutos[] = {0, 0, 10, 40, 5};

    // Inserir os acrescimos partindo da primeira ronda
    
    for (int i = 0; i < 5; i++) {
        int horas_atual = horas + acrescimos_horas[i];
        int minutos_atual= minutos + acrescimos_minutos[i];
        
        if (formato == 0) {
            formato24h(horas_atual, minutos_atual);
        } else {
            formato12h(horas_atual, minutos_atual);
        }
    }

    return 0;
}