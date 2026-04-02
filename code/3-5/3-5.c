#include <stdio.h>

void my_print(char type, void* x) {
    if (type == 'C')
        printf("%c\n", *(char*)x);
    else if (type == 'D')
        printf("%d\n", *(int*)x);
    else if (type == 'S')
        printf("%s\n", (char*)x);
}

int main() {
    char c = 'A';
    int d = 10;
    char str[] = "hello";

    my_print('C', &c);
    my_print('D', &d);
    my_print('S', str);

    return 0;
}
