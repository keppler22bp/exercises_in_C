#include <stdalign.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    char ashish[] = "mad";

    if (strcmp(ashish, "mad") == 0) {
        printf("he mad :( ");
    }

    if (strcmp(ashish, "sad") == 0) {
        printf("he sad");
    }

    return 0;
}
