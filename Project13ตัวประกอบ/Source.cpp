#include <stdio.h>
#include <conio.h>

int main() {
    int k, x = 2;
    scanf_s("%d", &k);
    while (k != 1) {
        while (k % x == 0) {
            printf("%d\n", x);
            k = k / x;
        }
        x++;
    }

    int _getch();
   
    return 0;
}