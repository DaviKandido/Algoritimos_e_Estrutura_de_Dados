#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f3a(const char* s, const char c) {
    char* r = NULL;
    int x = 0, y = 0;
    if (s) {
        while (*(s + x)) x++;
        r = (char*)calloc(x + 2, sizeof(char));
        y = x;
        while (x >= 0) {
            *(r + x) = *(s + x);
            x--;
        }

        *(r + y) = c;
    }
    return r;
}

int main() {
    char* result = f3a("abcd", 'e');
    printf("%s\n", result);
    free(result);
    return 0;
}

//a