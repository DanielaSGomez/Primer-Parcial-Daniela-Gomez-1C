#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct {
    int dia, mes, anio;
}eFecha;

typedef struct {

}eGeneros;

typedef struct
{
    int idPelicula;
    char titulo[70];
    eFecha fecha;
    eGeneros generoPeli;
    char actor[70];
    char paisOrigen[100];
    int isEmpty;

}ePeliculas;

int initePeliculas(ePeliculas lista[], int tam);
int buscarLugarLibre(ePeliculas lista[], int tam);
int buscarExisteId(ePeliculas lista[], int tam, int id);
int anadirPeliculaaut(ePeliculas lista[], int tam, int id, char genero[], char actor[], char paisOrigen[],char titulo[]);
int mostrarUnElemento(ePeliculas unElemento);
int mostrarListaElementos(ePeliculas lista[], int tam);
int modificarElemento(ePeliculas lista[], int tam, int id);
int bajaElemento(ePeliculas lista[], int tam, int id);
int harcodearData(ePeliculas lista[], int tam);
//int harcodearData(ePeliculas lista[] int tam);


#endif // PELICULAS_H_INCLUDED
