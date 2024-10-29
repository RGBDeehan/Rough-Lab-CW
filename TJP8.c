#include <stdio.h>
int main() {
int minutes, hours, remainingMinutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    remainingMinutes = minutes % 60;

    printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, remainingMinutes);


return 0;
}
