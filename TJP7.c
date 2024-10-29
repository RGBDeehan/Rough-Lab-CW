#include <stdio.h>
int main() {
float km, meters, feet, inches, centimeters;
printf("Enter distance in kilometers: ");
scanf("%f", &km);
    meters = km * 1000;
    centimeters = km * 100000;
    inches = km * 39370.1;
    feet = km * 3280.84;

printf("Distance in meters: %.2f m\n", meters);
printf("Distance in centimeters: %.2f cm\n", centimeters);
printf("Distance in inches: %.2f inch\n", inches);
printf("Distance in feet: %.2f ft\n", feet);


return 0;
}
