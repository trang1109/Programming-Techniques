#include<stdio.h>

int main()
{
    int counter[10001] = {0}, n, i, input, maximum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &input);
        if(input < 10001 && input > 0)
            ++counter[input + 100];
        else
            ++counter[input];
    }
    maximum = counter[0];
    for (i = 0; i < 10001; i++) {
        if (counter[i] > maximum) {
            maximum = i - 100;
        }
    }
    printf("%d", maximum);

    return 0;
}
