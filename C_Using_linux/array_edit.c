#include <stdio.h>
#include <stdlib.h>

void add(int a[], int *len, int pos, int val) {
    if ((*len) >= 20) {
        printf("Array is full. Cannot add element.\n");
        return;
    }

    for (int i = (*len); i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    (*len)++;
}
void del(int a[], int *len, int pos) {
    if (*len < 10) {
        printf("Array is empty ,Cannot del element.\n");
        return;
    }

    for (int i = pos; i <(*len); i++) {
        a[i] = a[i + 1];
    }
    (*len)--;
}

int main() {
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int opt, pos, len, val;
    len = 10;

    printf("Enter a choice 1 for add: ");
    scanf("%d",&opt);

    if (opt == 1) {
        printf("Enter the element position and value to add: ");
        scanf("%d %d", &pos, &val);

        if (pos < len) {
            add(a, &len, pos, val);

            printf("Array after addition:\n");
            for (int i = 0; i < len; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        } else {
            printf("Invalid position.\n");
        }
    }
    if (opt == 2) {
        printf("Enter the element position to delete: ");
        scanf("%d", &pos);

        if (pos < len) {
            del(a, &len, pos);

            printf("Array after deletion:\n");
            for (int i = 0; i < len; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        } else {
            printf("Invalid position.\n");
        }
    }

    return 0;
}
