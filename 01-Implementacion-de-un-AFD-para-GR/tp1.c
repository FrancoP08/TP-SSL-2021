#include <stdio.h>
#include <stdlib.h>

void copiarCadena(FILE*, FILE*);
void estadoFinal(char, FILE*);
char nuevoEstado(char, char);
int estadoAFila(char);
int caracterAColumna(char);

char matrizTransicion[7][17] = {
                    //           '0'  '1'  '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9'  'A'  'B'  'C'  'D'  'E'  'F'  'X'
                    /*  R   */  {'S', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', '-', '-', '-', '-', '-', '-', '-'},
                    /*  S   */  {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', '-', '-', '-', '-', '-', '-', '-', '-', 'U'},
                    /*  T   */  {'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', '-', '-', '-', '-', '-', '-', '-'},
                    /*  U   */  {'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', '-'},
                    /*  V   */  {'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', 'V', '-'},
                    /*  W   */  {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                    /*  -   */  {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}
};

int main() {
    FILE *fpEntrada, *fpSalida;

    int tamanioPalabra;

    char nuevoCaracter, estado='R';
    char *palabra;

    fpEntrada = fopen("entrada.txt", "r");
    fpSalida  = fopen("salida.txt", "w+");


    if(!fpEntrada || !fpSalida){
        perror("Error abriendo el archivo");
        return (-1);
    }
    else{
        
        fputs("NRO recibido\t\tEn base\n", fpSalida);

        copiarCadena(fpEntrada, fpSalida);
        nuevoCaracter = fgetc(fpEntrada);

        while (!feof(fpEntrada))
        {
            if(nuevoCaracter == ','){

                estadoFinal(estado, fpSalida);
                copiarCadena(fpEntrada, fpSalida);
                estado = 'R';
            }
            else{
                estado = nuevoEstado(estado, nuevoCaracter);
            }

            nuevoCaracter = fgetc(fpEntrada);
        }

        estadoFinal(estado, fpSalida);
    }

    fclose(fpEntrada);
    fclose(fpSalida);

    return 0;  
}

void estadoFinal(char estado, FILE *fpSalida){

    switch (estado)
    {
        case 'S':
            fputs("\t\t\tOCTAL\n", fpSalida);
            break;
        case 'T':
            fputs("\t\t\tDECIMAL\n", fpSalida);
            break;
        case 'V':
            fputs("\t\t\tHEXADECIMAL\n", fpSalida);
            break;
        case 'W':
            fputs("\t\t\tOCTAL\n", fpSalida);
            break;
        
        default:
            fputs("\t\t\tNO RECONOCIDA\n", fpSalida);
            break;
    }
}

void copiarCadena(FILE *fpEntrada, FILE *fpSalida){
    char c  = fgetc(fpEntrada);
    int len = 1;

    while (c != ',' && !feof(fpEntrada))
    {
        len++;
        fprintf(fpSalida, "%c", c);
        c = fgetc(fpEntrada);
        
    }

    if(c==',')
        fseek(fpEntrada, -len, SEEK_CUR);
    else
        fseek(fpEntrada, -len+1, SEEK_CUR);
    
    return;
}

char nuevoEstado(char estado, char caracter){
    int i = estadoAFila(estado);
    int j = caracterAColumna(caracter);

    return matrizTransicion[i][j];
}

int estadoAFila(char estado){
    if(estado >= 82 && estado <=87){
        return estado - 82;
    }
    else{
        return 6;
    }
}

int caracterAColumna(char nuevoCaracter){

    //[0;9]
    if(nuevoCaracter < 58) {
        return nuevoCaracter - 48; 
    }
    
    //[A;F] U [a;f]
    else if (nuevoCaracter >= 65 && nuevoCaracter <= 70){
        return nuevoCaracter - 55;
    }
    else if (nuevoCaracter >= 97 && nuevoCaracter <= 102) {
        return nuevoCaracter - 87;
    }

    //{x, X}
    else if(nuevoCaracter = 120){
        return nuevoCaracter - 104;
    }
    else if(nuevoCaracter = 88){
        return nuevoCaracter - 72;
    }
    else{
        printf("Algo salió mal :c");
    }
}