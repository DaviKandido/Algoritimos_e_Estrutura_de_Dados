#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f2a(const char* s) {
    char* r = NULL;
    int x = 0, y = 0;
    if (s) {
        while (*(s + x)) x++;
        r = (char*)calloc(x + 1, sizeof(char));
        x--;
        while (x >= 0) {
            *(r + y) = *(s + x);
            y++;
            x--;
        }
    }
    return r;
}

int main() {
    char* result = f2a("abcde");
    printf("%s\n", result);
    free(result);
    return 0;
}

//b