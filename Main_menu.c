#include "main.h"
/**
 * main - hotel functionality
*/
int main()
{
    int choice;

        // Display main menu
        Mainmenu();

        // get user choice
        scanf("%d", &choice);
        // checks if user selects valid service
    

    switch (choice)
        {
        case 1:
            ReservationManagement();
            break;
        case 2:
            CustomerManagement();
            break;
        case 3:
            Admin();
            break;
        case 4:
            CustomerSupport();
            break;
        case 5:
            PrivacyPolicy();
            break;
        case 6:
            break;
        default:
        printf("\nPlease select available service.\n");
            break;
        }
    
}

/**
 * Mainmenu - displays the main menu
*/
void Mainmenu()
{
    printf("\n************** | ODRIEW HOTEL AND SUITES | **************");
    printf("\n\n========== Main Menu ==========\n");
    printf("\n1. Reservation Management\n");
    printf("\n2. Customer Management\n");
    printf("\n3. Admin\n");
    printf("\n4. Customer Support\n");
    printf("\n5. Privacy Policy\n");
    printf("\n6. Exit\n");

}


/**
 * ReservationManagement - displays the reservation menu
*/
void ReservationManagement()
{
    int select;

    printf("\n========== RESERVATION MANAGEMENT ==========\n");
    printf("\n1. Reserve a room\n");
    printf("\n2. Business Conference\n");
    printf("\n3. Events Reservation\n");
    printf("\n4. Main menu\n");

    scanf("%d", &select);
        if (select == 4)
        {
           Mainmenu(); 
        }
        else if (select == 1)
        {
            reserve_room();
        }
        else if (select == 2)
        {
            events();
        }
        else if (select == 3)
        {
            conference();
        }
        else {
            printf("\nPlease select valid option.\n");
        }
}

/**
 * CustomerManagement - Displays Customer management menu
*/
void CustomerManagement()
{
    int select;

    printf("\n========== CUSTOMER MANAGEMENT ==========\n");
    // printf("\nEnter your username: \n");
    // printf("\nEnter your number: \n");

    printf("\n1. Check User info\n");
    printf("\n2. Change Room\n");
    printf("\n3. Frequent Customer Discount Program\n");
    printf("\n4. Cancel Reservation\n");
    printf("\n5. Check Receipt\n");
    printf("\n6. Main menu\n");

    scanf("%d", &select);
        if (select == 6)
        {
           Mainmenu(); 
        }

}

/**
 * MealManagement - displays meal management menu
*/
void Admin()
{
    int ID = 6999;
    int input;
    int select;

    printf("Please enter Admin ID: \n");
    scanf("%d", &input);

    if (input == ID)
    {
        printf("\n========== ADMIN MANAGEMENT ==========\n");
        printf("\n1. Create New Room\n");
        printf("\n2. Check Available Rooms\n");
        printf("\n3. Delete Room\n");
        printf("\n4. Customer Informations\n");
        printf("\n5. Transactions\n");
        printf("\n6. Customer Support\n");
        printf("\n7. Main menu\n");

        scanf("%d", &select);
        if (select == 7)
        {
           Mainmenu(); 
        }
    }
    else
    {
        printf("Incorrect ID.\n");
    }
}

/**
 * CustomerSupport - Customer services
*/
void CustomerSupport()
{
    printf("\n========== CUSTOMER SUPPORT ==========\n");
    printf("\nEnter Username: \n");
    // scanf()
    printf("\nEnter email/number: \n");
    // scanf()
}

/**
 * PrivacyPolicy - Privacy agreement
*/
void PrivacyPolicy()
{
    displayfile("privacy_policy.txt");
}

