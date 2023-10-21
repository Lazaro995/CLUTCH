#ifndef DECLARACIONFUNCIONES_H_INCLUDED
#define DECLARACIONFUNCIONES_H_INCLUDED

using namespace std;

//DECLARACIONES DE FUNCIONES

void desplegarMenu();
string asignarNombres();
char confirmarNombresJugadores();
void mezclar(string matrizCartas[][4]);
int tirardado();
bool determinarSiGanoElJugador(string manoJugador[], string matrizSinMezclar[][4], int tam);
void mezclarMazo(string cartasDelMazo[], int tam);


//FUNCIONES DADO

void accionDado1(string manoJugador[], string cartasDelMazo[]);
void accionDado2(string manoJugador[],string cartasDelMazo[], int cartaCorral);
void accionDado3(string manoJugadorQueNoEmpieza[], string manoJugadorQueEmpieza[], int cartaCorralPropio, int cartaCorralContrario);
void accionDado4(string manoJugadorQueEmpieza[], bool manoJugadorSinCartasBloqueadas[]);
void accionDado5(bool manoJugadorSinCartasBloqueadas[]);
int accionDado6();


#endif // DECLARACIONFUNCIONES_H_INCLUDED
