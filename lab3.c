#include "types.h"
#include "user.h"

#pragma GCC optimize ("O0") //This stops tail end optimization to make sure we need more pages to be created
int recursive (int n) {
    if (n == 0) {
        return n;
    } else {
        //printf(1, "something");
        return 1 + recursive(n - 1);
    }
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int result = recursive(n);
    printf(2, "Result: %d", result);
    exit();
    return 0;
}