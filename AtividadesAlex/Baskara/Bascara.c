#include <stdio.h>
#include <math.h>

void raizes(float, float, float, float*, float*);

float delta (float a, float b, float c) {
    float delta;
    delta=(b*b)-(4*a*c);
    return delta;
}

int main() {
    float a=0, b=0, c=0, x1=0, x2=0;
    scanf("%f %f %f", &a, &b, &c);
    if((delta(a, b, c))<0 || (a==0 && b==0 && c==0)) printf("NARN");
    else {
        raizes(a, b, c, &x1, &x2);
        printf("%.2f\t%.2f", x1, x2);
    }
    return 0;
}

void raizes (float a, float b, float c, float* x1, float* x2) {
    float delta = (b*b)-(4*a*c);
    *x1=(-b+(pow(delta, 0.5)))/(2*a);
    *x2=(-b-(pow(delta, 0.5)))/(2*a);
}