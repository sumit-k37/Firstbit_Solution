#include <stdio.h>
int main() {
    int r;
    float area;

    printf("Enter r = ");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("Area is %.2f", area);

    return 0;
}
