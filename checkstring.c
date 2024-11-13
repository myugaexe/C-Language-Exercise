#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%[^\n] %s", a, b);

    if (strstr(a, b) != NULL) {
        printf("Found");
    } else {
        printf("Not Found");
    }
}