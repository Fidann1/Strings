#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "text is mytext hi text";
    char esp[] = "text";
    int len_text = strlen(text);
    int len_esp = strlen(esp);

    for (int i = 0; i < (len_text - len_esp + 1); i++) {
        if (strncmp(text + i, esp, len_esp) == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}







