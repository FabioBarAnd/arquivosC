#include <stdio.h>

int main() {
    int n, cont;
    long int x=0, z=1, fib;
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (cont=2; cont!=n; cont=cont+2) {
            x = x + z;
            z = x + z;
        }
        fib = x + z;
        printf("%ld", fib);
    } else {
        for (cont=1; cont!=n; cont=cont+2) {
            x = x + z;
            z = x + z;
        }
        fib = z;
        printf("%ld", fib);
    }
    return 0;
}



/*#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", fibonacci(n));

    return 0;
}*/