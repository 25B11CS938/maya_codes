#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1; // total rows and columns

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            // distance to nearest edge
            int minEdge = top;
            if (left < minEdge)   minEdge = left;
            if (bottom < minEdge) minEdge = bottom;
            if (right < minEdge)  minEdge = right;

            int val = n - minEdge;

            printf("%d", val);
            if (j < size - 1) printf(" ");
        }
        if (i < size - 1) printf("\n");
    }

    return 0;
}

