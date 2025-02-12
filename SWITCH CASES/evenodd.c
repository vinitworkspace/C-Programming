#include <stdio.h>
int main()
{
    int A;
    printf("ENTER A NUMBER :");
    scanf("%d", &A);

    switch (A%2)
    {
    case 0:
    {
        printf("EVEN");
        break;
    }
    case 1:
        printf("ODD");break;
    default:
        printf("!! INVAID INPUT !!");break;
    }
}















// #include <stdio.h>

// int main() {
//     int num;
    
//     // Taking user input
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     // Using switch case to check even or odd
//     switch (num % 2) {
//         case 0:
//             printf("%d is Even.\n", num);
//             break;
//         case 1:
//         case -1: // Handles negative odd numbers
//             printf("%d is Odd.\n", num);
//             break;
//     }
    
//     return 0;
// }
