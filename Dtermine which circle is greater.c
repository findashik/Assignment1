#include <stdio.h>


float findArea(int radius) {
    return 3.1415 * radius * radius;
}

int main() {
    int rad1, rad2;
    scanf("%f%f", &rad1,&rad2);

    float area1 = findArea(rad1);
    float area2 = findArea(rad2);

    if (area1 > area2) {
        printf("The area of the first circle is greater: %.2f\n", area1);
    } else if (area2 > area1) {
        printf("The area of the second circle is greater: %.2f\n", area2);
    } else {
        printf("Both circles have the same area: %.2f\n", area1);
    }

    return 0;
}
