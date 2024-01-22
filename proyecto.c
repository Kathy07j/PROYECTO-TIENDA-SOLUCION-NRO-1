#include <stdio.h>
#include <math.h>
int main() {
   float pesos, producciones,pesocamion, producciontotal;
   char respuesta;
   int numvacas;

   system("color B0");

    printf("---Bienvenido al programa para ver la maxima produccion de leche que se puede obtener de las vacas que desea comprar ---\n\n\n");
    printf(" A continuacion incomporar los siguientes datos: \n\n");
    do {

        pesocamion =0;
        pesos=0;
        producciones=0;
        numvacas=0;
        producciontotal=0;
     do {
    printf("Ingrese el peso total del camion  en toneladas entre (2-32) : \n");
   scanf("%f", &pesocamion);
    if ( pesocamion<=0 || pesocamion<2 || pesocamion>32 )
    {
        printf("Esta mal ingresado el peso del camion , vuelva ingresarlos por favor \n  ");
    }

  }while(pesocamion<=0 || pesocamion<2 || pesocamion>32 );



   do{
       printf("Ingrese el peso de las  vacas  en Kilogramos entre (140-1100): \n ");
       scanf("%f", &pesos);
       if ( pesos<140 || pesos>1100  )
    {
        printf("Esta mal ingresado el peso del grupo de las vacas, vuelva ingresarlos por favor \n  ");
    }
    }while(pesos<140 || pesos>1100  );


    do{
       printf("Ingrese la produccion de leche que produce las vacas por litros por dia entre (1-70): \n ");
       scanf("%f", &producciones);
      if ( producciones<=0 || producciones>70)
    {
        printf("Esta mal ingresado los datos de la produccion de leche , vuelva ingresarlos por favor \n  ");
    }
      }while(producciones<=0 || producciones>70);

  //PARA CAMBIAR DE TONELADAS A KILOGRAMOS
  pesocamion=pesocamion*1000;

  // PARA CALCULAR EL NUMERO DE VACAS
  numvacas=trunc(pesocamion/pesos);

  // PARA CALCULAR LA PRODUCCION TOTAL
  producciontotal= numvacas*producciones;


    printf(" ------------- PARA LA  PRODUCCION MAXIMA DE LECHE ------------\n\n");
    printf("El  camion puede llevar   :  %.i vacas en su capacidad maxima \n", numvacas);
    printf("La cantidad maxima de produccion de leche que se puede obtener de las vacas es  de:  %.2f litros \n\n\n", producciontotal);


    printf("Desea ingresar otros datos de grupo de vacas (S=Si / N=No): \n");
    scanf(" %c", &respuesta);

    }while(respuesta == 's' || respuesta == 'S');
     printf("Gracias por ocupar nuestro sistema de maximizacion de la produccion de leche\n");


  return 0;

}
