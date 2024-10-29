#include <stdio.h>
int main(){
int hours, minutes, totalMinutes;
float fractionalHours;
    printf("Enter running time of the movie: ");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);

    totalMinutes = (hours * 60) + minutes;
    fractionalHours = hours + (minutes / 60.0);

    printf("The running time of the movie is:\n");
    printf("%d minutes\n", totalMinutes);
    printf("%.2f hours\n", fractionalHours);

return 0;
}

