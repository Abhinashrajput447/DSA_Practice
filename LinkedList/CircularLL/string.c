#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[11], status[11];

    char rats[100][11], womenChildren[100][11], men[100][11], captain[11];
    int r = 0, w = 0, m = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s", name, status);

        if (strcmp(status, "rat") == 0) {
            strcpy(rats[r++], name);
        } else if (strcmp(status, "woman") == 0 || strcmp(status, "child") == 0) {
            strcpy(womenChildren[w++], name);
        } else if (strcmp(status, "man") == 0) {
            strcpy(men[m++], name);
        } else if (strcmp(status, "captain") == 0) {
            strcpy(captain, name);
        }
    }

    // Print in order
    for (int i = 0; i < r; i++) printf("%s\n", rats[i]);
    for (int i = 0; i < w; i++) printf("%s\n", womenChildren[i]);
    for (int i = 0; i < m; i++) printf("%s\n", men[i]);
    printf("%s\n", captain);

    return 0;
}
