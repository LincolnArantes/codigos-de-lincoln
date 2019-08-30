/// talvez rode no DEV c


#include <iostream.h> //Para disponibilizar a função cout do C++.

#include <stdio.h> //Para disponibilizar a função printf() do C.

#include <conio.h> //Para disponibilizar a função getch() do C;

#define ENDBASE 0x378 //LPT1

#define ENDDADOS ENDBASE + 0 //0x378

#define ENDSTATUS ENDBASE + 1 //0x379

#define ENDCONTROLE ENDBASE + 2 //0x37A

#define LIGA_TODOS_LEDS_CONTROLE 4 //00000100

#define DESLIGA_TODOS_LEDS_CONTROLE 11 //00001011

main( ) //Função principal da linguagem C que chama todas as outras.

{ //Início do programa

//Cria um protótipo de strutura.

struct PortaParalela

{

unsigned char Dados; //Declaração das variáveis membros.

unsigned char Status;

unsigned char Controle;

};

struct PortaParalela LPT; //Define a variável LPT como do tipo struct PortaParalela.

printf( "Pressione uma tecla para ler o status da Porta Paralela..." );


 
getch( ); //Aguarda o pressionamento de uma tecla.

LPT.Status = inportb( ENDSTATUS ); //Lê a Porta Paralela.------------------>para aqui --------------

printf( "\nO status atual da Porta Paralela é: %d\n\n", LPT.Status );

printf( "\nPressione uma tecla para acender todos os LEDs da Porta de DADOS..." );

getch( ); //Aguarda o pressionamento de uma tecla.

LPT.Dados = 255; //Liga todos os bits (11111111).

outportb( ENDDADOS, LPT.Dados ); //Envia para a Porta e Liga todos os LEDs-----------------------> e aqui tambem......-------------

printf( "\nPressione uma tecla para apagar todos os LEDs da Porta de DADOS..." );


 
getch( ); //Aguarda o pressionamento de uma tecla.

LPT.Dados = 0; //Desliga todos os bits (00000000).

outportb( ENDDADOS, LPT.Dados ); //Envia para a Porta e desliga todos os LEDs

printf( "\nPressione uma tecla para acender todos os LEDs da Porta de CONTROLE..." );

getch( ); //Aguarda o pressionamento de uma tecla.

LPT.Controle = LIGA_TODOS_LEDS_CONTROLE; //Liga todos os bits (00000100).

outportb( ENDCONTROLE, LPT.Controle ); //Envia para a Porta e desliga todos os LEDs.

printf( "\nPressione uma tecla para apagar todos os LEDs da Porta de CONTROLE..." );


 
getch( ); //Aguarda o pressionamento de uma tecla.

LPT.Controle = DESLIGA_TODOS_LEDS_CONTROLE; //Desliga todos os bits (00001011).

outportb( ENDCONTROLE, LPT.Controle ); //Envia para a Porta e desliga todos os LEDs

printf("\n\nPressione uma tecla para finalizar...");

getch( ); //Aguarda o pressionamento de uma tecla para finalizar o programa.

} //FIM do programa.