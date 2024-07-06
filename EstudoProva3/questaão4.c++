#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f4a(const char c, const char* s) {
    char* r = NULL;
    int x = 0, y = 0;
    if (s) {
        while (*(s + x)) x++;
        r = (char*)calloc(x + 2, sizeof(char));
        *(r + y) = c;
        while (y <= x) {
            *(r + y + 1) = *(s + y);
            y++;
        }


    }
    return r;
}

int main() {
    char* result = f4a( 'a', "bcde");
    printf("%s\n", result);
    free(result);
    return 0;
}

//d ou a?