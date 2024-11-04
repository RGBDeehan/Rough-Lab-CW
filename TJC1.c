#include <stdio.h>
int main() {
int Hour, Minute, Hour_angle, Minute_angle, diff_btwn_two_hand ;
    printf("Enter Hour (0-12): ");
    scanf("%d", & Hour);

    printf("Enter Minute (0-59): ");
    scanf("%d", & Minute);
 Hour_angle =(Hour*30) + (Minute*0.5);

 Minute_angle =(Minute*6);
diff_btwn_two_hand = (Hour_angle - Minute_angle);

 printf("Hour Angle: %d\n" ,Hour_angle);
 printf("Minute Angle: %d\n",Minute_angle);
printf("Difference Between two hands: %d\n",diff_btwn_two_hand);



return 0;
}
