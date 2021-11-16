#include"tp5.h"

int contieneIgual(char* linea) {
    for(int i = 0; i < strlen(linea); i++) {
        if(linea[i] == '=') {
            return 1;
        }
    }
    return 0;
}

int chequearOperador(char* linea , char* operador) {

    //Obtener operandos
    char* cuenta;
    if(contieneIgual(linea)) {
        cuenta = sacarEspacios(substringDesde(linea, '='));
    } else {
        cuenta = sacarEspacios(linea);
    }
    char* primerOperando = substringHastaCaracter(cuenta, operador);
    char* segundoOperando = substringDesde(cuenta, operador);


    //Validar operandos
    int primerOperandoOK = 0;
    int segundoOperandoOK = 0;

    char* tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(primerOperando));
    if (tipoObtenidoDesdeLista) {
        if(strcmp(tipoObtenidoDesdeLista, "int") == 0) primerOperandoOK = 1;
    } else {
        enum yytokentype tipoObtenidoDesdeFlex = invokeFlex(sacarEspacios(primerOperando));
        char* strTipo = tipoFlexAString(tipoObtenidoDesdeFlex);
        if(strcmp(strTipo, "no declarado") == 0) printf("[ERROR] La variable %s no ha sido declarada\n", primerOperando);
        else primerOperandoOK = 1;
    }

    tipoObtenidoDesdeLista =  obtenerTipoDesdeLista(identificadores_variables, sacarEspacios(segundoOperando));
    if (tipoObtenidoDesdeLista) {
        if(strcmp(tipoObtenidoDesdeLista, "int") == 0) segundoOperandoOK = 1;
    } else {
        enum yytokentype tipoObtenidoDesdeFlex = invokeFlex(sacarEspacios(segundoOperando));
        char* strTipo = tipoFlexAString(tipoObtenidoDesdeFlex);
        if(strcmp(strTipo, "no declarado") == 0) printf("[ERROR] La variable %s no ha sido declarada\n", segundoOperando);
        else segundoOperandoOK = 1;
    }

    if(primerOperandoOK && segundoOperandoOK) {
        printf("[LOG] Suma valida encontrada: %s + %s\n", primerOperando, segundoOperando);
    }
    return primerOperandoOK && segundoOperandoOK;
}

char* substringHastaCaracter(char* cadena, char caracter) {
    char* cadenaSinCaracter = (char*)malloc(sizeof(char)*strlen(cadena));
    int i = 0;
    int j = 0;

    int continuar = 1;
    while(cadena[i] != '\0' && continuar == 1){
        if(cadena[i] != caracter){
            cadenaSinCaracter[j] = cadena[i];
            j++;
            continuar = 0;
        }
        i++;
    }
    cadenaSinCaracter[j] = '\0';
    return cadenaSinCaracter;
}

