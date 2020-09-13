#include <stdio.h>
int main() {
    char  i , j ,input ;
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf_s("%c", &input);
    if (input >= 'A' & input <= 'Z') {
        for (i = 65; i <= input ; ++i) {
            for (j = 65; j <= i; ++j) {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
    else printf("Error ");
    return 0;
}