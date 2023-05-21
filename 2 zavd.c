#include <stdio.h>
#include <math.h>
int main()
{
    char input;
choice:
    printf(" Запустити код? (y/n): ");
    scanf(" %s", &input);
    if (input == 'y')
    {
        goto method;
    }
    else if (input == 'n')
    {
        printf("Код зупинено.");
        return 0;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto choice;
    }

method:
{
    char input;
    printf("a - з параметром; b - з передумовую; c - з післяумовою. \n");
    printf("Яким методом будемо вирішувати завдання? Щоб повернутися - напишіть  r. (a/b/c/r): ");
    scanf(" %s", &input);
    if (input == 'a')
    {
        goto code_1;
    }
    else if (input == 'b')
    {
        goto code_2;
    }
    else if (input == 'c')
    {
        goto code_3;
    }
    else if (input == 'r')
    {
        goto choice;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto method;
    }
}

code_1:
{
    int x, sum = 0;
    printf("Введіть ціле число: ");
    scanf("%d", &x);
    for(int i = 1; i <= 100; i++) {
        if(i % 2 != 0 && i < x) {
            sum += i;
        }
    }
    printf("Сума всіх непарних чисел менша за %d і %d", x, sum);
    goto choice;
}

code_2:
{
    int x, sum = 0, i = 1;
    printf("Введіть ціле число: ");
    scanf("%d", &x);
    while(i <= 100) {
        if(i % 2 != 0 && i < x) {
            sum += i;
        }
        i++;
    }
    printf("Сума всіх непарних чисел менша за %d і %d", x, sum);
    goto choice;
}

code_3:
{
    int x, sum = 0, i = 1;
    printf("Введіть ціле число: ");
    scanf("%d", &x);
    do {
        if(i % 2 != 0 && i < x) {
            sum += i;
        }
        i++;
    } while(i <= 100);
    printf("Сума всіх непарних чисел менша за %d і %d", x, sum);
    goto choice;
}
}