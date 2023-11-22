#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>

int main();
void Mainmenu();
void ReservationManagement();
void CustomerManagement();
void Admin();
void CustomerSupport();
void PrivacyPolicy();
void reserve_room();
void conference();
void events();
void displayfile(const char *filename);


// RESERVE ROOM FUNCTION
#include "main.h"
void reserve_room()
{
    printf("\n============== Room Reservation ==============\n");
    printf("\nAvailable rooms (txt), working on it! \n");
}
// EVENTS RESERVATION FUNCTION
#include "main.h"
void events()
{
    printf("\n============== Events Reservation ==============\n");
    printf("\nPlease enter events details: \n");

}


// CONFERENCE RESERVATION FUNCTION
#include "main.h"
void conference()
{
    printf("\n============== Conference Reservation ==============\n");
    printf("\nPlease enter conference details: \n");
}


// DisplayFile Function
void displayfile(const char *filename) {
    FILE *file;
    char ch;

    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}
#endif