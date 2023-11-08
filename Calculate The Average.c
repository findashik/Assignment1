#include <stdio.h>

float Average(float num1, float num2) {
    float sum = (num1 + num2);
    return sum = (num1 + num2) / 2.0;
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    float result = Average(a, b);

    printf("Average: %.2f\n", result);

    return 0;
}
