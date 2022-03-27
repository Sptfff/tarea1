#ifndef SONG_H
#define SONG_H
#include "list.h"
typedef struct {
    char name[30];
    char artist[30];
    char playlist[10];
    List *genres;
    int year;
}Song;

Song *createSong(char *name,
        char *artist,
        char **genres,
        int year,
        char *playlist);

#endif