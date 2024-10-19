#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    
    printf("%-10s %-10s %-10s\n", "Degrees", "Sine", "Cosine");
    printf("--------------------------\n");
    
    
    for (double degrees = 0; degrees <= 360; degrees += 30.4) {
        double radians = degrees * (PI / 180.0); 
        double sineValue = sin(radians);         
        double cosineValue = cos(radians);       

        
        printf("%-10.1f %-10.6f %-10.6f\n", degrees, sineValue, cosineValue);
    }

    return 0;
}
