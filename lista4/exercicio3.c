#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int temp;

    printf("Digite cinco valores inteiros:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (a > d) { temp = a; a = d; d = temp; }
    if (a > e) { temp = a; a = e; e = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (b > d) { temp = b; b = d; d = temp; }
    if (b > e) { temp = b; b = e; e = temp; }
    if (c > d) { temp = c; c = d; d = temp; }
    if (c > e) { temp = c; c = e; e = temp; }
    if (d > e) { temp = d; d = e; e = temp; }
    printf("Valores em ordem crescente: %d %d %d %d %d\n", a, b, c, d, e);
    printf("Valores em ordem decrescente: %d %d %d %d %d\n", e, d, c, b, a);
    return 0;
}
