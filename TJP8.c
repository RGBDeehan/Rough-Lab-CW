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



#include <stdio.h>
int main() {
float minutes, hours, remainingMinutes;
    printf("Enter minutes: ");
    scanf("%f", & minutes);

    hours = floor (minutes / 60 );

    remainingMinutes = (int) minutes % 60;

    printf("%.2f minutes is equal to %.2f hours and %.2f minutes\n", minutes, hours, remainingMinutes);


return 0;
}
