#include <stdio.h>

main() {
    static int value = 3;
    if (value--) {
        printf("%d", value);
        main();
    }
}
