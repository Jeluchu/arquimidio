#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "interfaz.h"

void inicio(){
  time_t tiempo = time(0);

    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

    printf("\n");
    system("toilet -fpagga 'ARQUIMIDIO'");
    printf("\n");
    sleep(2);
    printf(AMARILLO "|     Te damos la bienvenida ");
    printf("%s", getenv("USER"));
    printf("\n" NORMAL);
    sleep(1);
    printf(VERDE "|     ARQUIMIDIO v0.1 ~ Versión 'ESTABLE'\n" NORMAL);
    sleep(1);
    printf(AZULETE "|     Iniciada el %s\n" NORMAL,output);
    printf("+---------------------------------------------------------------------+\n");
    sleep(1);
    printf(
   NEGRITA "|     Arquimidio, el conversor diversor\n"
           "|     En el podrás realizar conversiones de unidades\n"
           "|     y hacer diversos cálculos monetarios\n" NORMAL);
    printf("+---------------------------------------------------------------------+\n\n");
    printf("PRÓXIMAMENTE!!\n");
sleep(8);
    system("clear");
}
