#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;
    state = OUT;
 
    while ((c = getchar()) != EOF) {
        ++nc;
        
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("\nLine Count: %d", nl);
    printf("\nWord Count: %d", nw);
    printf("\nChar Count: %d", nc);
}