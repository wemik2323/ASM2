#include <stdio.h>
#include <stdlib.h>

short res_short;
short res_ushort;

extern void asm_short(short a, short b);
extern void asm_ushort(short a, short b);

void f_short() {
    short a, b;
    puts("Введите a, b");
    scanf("%hd", &a);
    scanf("%hd", &b);
    asm_short(a, b);
    printf("Результат = %hd\n", res_short);
}

void f_ushort() {
    short a, b;
    puts("Введите a, b");
    scanf("%hd", &a);
    scanf("%hd", &b);
    asm_ushort(a, b);
    printf("Результат = %hd\n", res_ushort);
}

int main() {
    short a;
    puts("Выберите тип данных(1 - short ; 2 - unsigned short)");
    if (1 != scanf("%hd", &a)) {
        puts("Bad choice...");
    }
    if (a == 1) {
        f_short();
    } else if (a == 2) {
        f_ushort();
    } else {
        puts("К черту правила...");
    }
    return 0;
}
