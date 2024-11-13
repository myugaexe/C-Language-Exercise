#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int n;
    
    scanf("%s %d", a, &n);  

    char result[100];
    int x = strlen(a);
    
    for (int i = 0; i < x; i++) {
        result[i] = a[i] + n;

        if (a[i] >= 'A' && a[i] <= 'Z') {
            if (result[i] > 'Z') {
                result[i] -= 26; 
            }
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            if (result[i] > 'z') {
                result[i] -= 26; 
            }
        }
    }
    
    result[x] = '\0'; 

    printf("%s\n", result);  
    return 0;
}
