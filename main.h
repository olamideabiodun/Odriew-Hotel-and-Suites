#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
char *GetRoomInfo(int *room_number, char room_type[], double *price);
void SaveRoomInfo(const char *filename, int room_number, char room_type[], double price);
void clear_terminal();
int FileExists(FILE *file, const char *input);

void reserve_room()
{
    printf("\n============== Room Reservation ==============\n");
    printf("\nAvailable rooms (txt), working on it! \n");
}
// EVENTS RESERVATION FUNCTION

void events()
{
    printf("\n============== Events Reservation ==============\n");
    printf("\nPlease enter events details: \n");

}


// CONFERENCE RESERVATION FUNCTION

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

// Get Room info
char *GetRoomInfo(int *room_number, char room_type[], double *price)
{

    printf("\nEnter Room Number: ");
    scanf("%d", room_number);

    printf("\nEnter Room Type: ");
    scanf("%s", room_type);

    printf("\nEnter Room Price: $");
    scanf("%lf", price);
    return 0;
}

// Save Room Info Function
void SaveRoomInfo(const char *filename, int room_number, char room_type[], double price)
{
    FILE *file;
    const char *input;
    file = fopen(filename, "a+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    input = GetRoomInfo(&room_number, room_type, &price);
    if (FileExists(file, input))
    {
        printf("Room already exists.\n");
    } else {

    fprintf(file, "\n%d", room_number);
    fprintf(file, "    | %s", room_type);
    fprintf(file, "    | %.2lf", price);

    fclose(file);
    }
}

// Clear terminal function
void clear_terminal()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


// check if file already exists
int FileExists(FILE *file, const char *input)
{
    char line[100];

    rewind(file);

    while (fgets(line, sizeof(line), file) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(input, line) == 0)
        {
            return 1;
        }
    } return 0;
}

#endif