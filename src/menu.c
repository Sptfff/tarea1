#include "menu.h"
#include "util.h"

void mostrarMenu(List* lista, int repetida){
    system("clear");

    if(lista->head) mostrarLista(lista, repetida);

    printf("Reproductor de Musica\n");
    printf("i: Ingresar cancion\n");
    printf("q: Salir\n");


}

void mostrarLista(List *lista, int repetida){
    printf("Canciones añadidas\n");

    for(Node *node = lista->head; node != NULL; node = node->next){
        printf("Nombre: %s\n", ((Song*)node->data)->name);
        printf("Artista: %s\n", ((Song*)node->data)->artist);
    }
    putchar('\n');
}

void mostrarCancion(Song *song){
    strcat(buf, "  Nombre: " );
    strcat(buf, song->name);
    strcat(buf, "\n  Artista: " );
    strcat(buf, song->artist);
    strcat(buf, "\n\n");
}
