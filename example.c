#include <stdio.h>

#include "cterm.h"

int main() {
    if (!intty) return 0;
    clear();
    printf("BLAZINGLY FAST");
    blank();
    printf(">>>");
    putCharAt(3, 3, 'E');
    setCurPos((cursor){3, 4});
    printf("Test");
    saveCurPos();
    printf("\nhuh?");
    restoreCurPos();
    puts(" text.\n");
    puts("Default");
    bold;
    puts("+bold");
    italic;
    puts("+italic");
    truecolorfg(0xFF0000);
    puts("RED");
    truecolorfg(0x00FF00);
    puts("GREEN");
    truecolorfg(0x0000FF);
    puts("BLUE");
    reset;
    puts("Default");
}
