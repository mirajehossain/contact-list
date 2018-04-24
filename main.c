/**
*
*
*   Contact list console application
*
*
*
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "contactlist.h";

int main()
{

    char getchoice[10];
    int userChoice;

    while(1){
        printf("Contact list Main menu\n");
        printf("\n");
        printf("    1. Add new contact \n");
        printf("    2. Update existing contact \n");
        printf("    3. Search by first name \n");
        printf("    4. Search by last name \n");
        printf("    5. Search by number \n");
        printf("    6. Search by email \n");
        printf("    7. Get all contact list \n");
        printf("    8. Delete a contact (By number) \n");
        printf("    9. Exit \n");

        do{
            printf("Enter Your choice: ");
            gets(getchoice);
            userChoice = atoi(getchoice);
        } while(userChoice>0 || userChoice<10);

        /**
        *
        *   Get user choice to perform task.
        */
        switch(userChoice){
        case 1:
            addNewContact();
            break;
        case 2:
            updateContact();
            break;
        case 3:
            searchByFirstName();
            break;
        case 4:
            searchByLastName();
            break;
        case 5:
            searchByNumber();
            break;
        case 6:
            searchByEmail();
            break;
        case 7:
            getAllContact();
            break;
        case 8:
            deleteContact();
            break;
        case 9:
           exit(0);
            break;
        default:
            break;
        } /// end switch case

    } /// end while


    return 0;
}
