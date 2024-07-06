#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f5a(const char* s) {
    char* r = NULL;
    int x = 0, y = 0;
    if (s) {
        while (*(s + x)) x++;
        r = (char*)calloc(x + 2, sizeof(char));
        y = x;
        while (y > 0) {
            *(r + y-1) = *(s + y);  
            y--;
        }


    }
    return r;
}

int main() {
    char* result = f5a( "abcde");
    printf("%s\n", result);
    free(result);
    return 0;
}

//d ou a?