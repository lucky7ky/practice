#include <stdio.h>

int Add(int x, int y);
void DetectMemory();

int main() {
    char x;
    int y = x;
    printf("hello world \n%d\n", Add(1, 2));
    printf("hello world %c\n", x);
    printf("hello world %d\n", y);
    printf("hello world %c\n", 99);
    DetectMemory();
    return 0;
}

int Add(int x, int y) {
    return x + y;
}

void DetectMemory() {
    int x;
    int y;
    char c1;
    char c2;
    printf("%d\n", &x);
    printf("%d\n", &y);
    printf("%d\n", &c1);
    printf("%d\n", &c2);
    x = 1025;
    printf("%d\n", x);
    c1 = x;
    printf("%d\n", c1);
}
