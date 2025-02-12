#include <stdio.h>

// Function declarations
void display_menu();
void handle_starter(int* total);
void handle_veg(int* total);
void handle_nonveg(int* total);
void print_total(int total);

int main()
{
    int choice, total = 0;

    while (1) // Infinite loop to allow multiple orders
    {
        display_menu(); // Show the main menu
        printf("Choose What You Want (or 0 to exit): ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 0)
            break; // Exit the loop if the user chooses 0

        switch (choice)
        {
        case 1:
            handle_starter(&total); // Call function to handle starter items
            break;
        case 2:
            handle_veg(&total); // Call function to handle veg items
            break;
        case 3:
            handle_nonveg(&total); // Call function to handle non-veg items
            break;
        default:
            printf("Invalid choice, please choose a valid menu item\n");
            break;
        }
    }

    print_total(total); // Print the total bill amount

    return 0;
}

// Function to display the main menu
void display_menu()
{
    printf("Menu:\n");
    printf(" 1. Starter\n 2. Veg\n 3. Non-Veg\n");
}

// Function to handle starter items
void handle_starter(int* total)
{
    int choice;
    int prices[] = {150, 200, 250}; // Prices of starter items

    printf("1. STARTER 1:\t$150\n");
    printf("2. STARTER 2:\t$200\n");
    printf("3. STARTER 3:\t$250\n");
    printf("Choose What You Want: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3)
    {
        printf("STARTER %d:\t$%d\n", choice, prices[choice - 1]);
        *total += prices[choice - 1]; // Add the price to the total
    }
    else
    {
        printf("Invalid choice, please choose a valid menu item\n");
    }
}

// Function to handle veg items
void handle_veg(int* total)
{
    int choice;
    int prices[] = {350, 400, 500}; // Prices of veg items

    printf("1. PANEER MASALA:\t$350\n");
    printf("2. PANEER KOFTA:\t$400\n");
    printf("3. PANEER ANGARA:\t$500\n");
    printf("Choose Your Favourite One: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3)
    {
        printf("PANEER %s:\t$%d\n", (choice == 1 ? "MASALA" : (choice == 2 ? "KOFTA" : "ANGARA")), prices[choice - 1]);
        *total += prices[choice - 1]; // Add the price to the total
    }
    else
    {
        printf("Invalid choice, please choose a valid menu item\n");
    }
}

// Function to handle non-veg items
void handle_nonveg(int* total)
{
    int choice;
    int prices[] = {500, 600, 700}; // Prices of non-veg items

    printf("1. CHICKEN MASALA:\t$500\n");
    printf("2. CHICKEN KOFTA:\t$600\n");
    printf("3. CHICKEN ANGARA:\t$700\n");
    printf("Choose Your Favourite One: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3)
    {
        printf("CHICKEN %s:\t$%d\n", (choice == 1 ? "MASALA" : (choice == 2 ? "KOFTA" : "ANGARA")), prices[choice - 1]);
        *total += prices[choice - 1]; // Add the price to the total
    }
    else
    {
        printf("Invalid choice, please choose a valid menu item\n");
    }
}

// Function to print the total bill amount
void print_total(int total)
{
    printf("\nTOTAL BILL AMOUNT: $%d\n", total);
}
