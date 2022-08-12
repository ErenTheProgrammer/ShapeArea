#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a, b, roc, los, bot, hot, lot, lor, bor;
    int f;
start:
    while (1)
    {
        printf("\nWhich Shape's Area Do You Want To Find\n");
        printf("1.Circle\n");
        printf("2.Square\n");
        printf("3.Triangle\n");
        printf("4.Rectangle\n");
        printf("0.Quit\n");
        printf("> ");
        scanf("%d", &f);
        if (f == 1)
        {
            printf("Please Input The Radius Of Circle\n");
            printf("> ");
            scanf("%f", &roc);
            printf("The Area Of This Circle Is %.2f\n", roc * roc * M_PI);
            goto start;
        }
        else if (f == 2)
        {

            printf("Please Input The Length Of Square\n");
            printf("> ");
            scanf("%f", &los);
            printf("The Area Of This Square Is %.2f\n", los * los);
            goto start;
        }
        else if (f == 3)
        {
            printf("Please Input The Base Of Triangle\n");
            printf("> ");
            scanf("%f", &bot);
            printf("Please Input The Height Of Triangle\n");
            printf("> ");
            scanf("%f", &hot);
            printf("The Area Of This Triangle Is %.2f\n", bot * hot / 2);
            goto start;
        }
        else if (f == 4)
        {

            printf("Please Input The Length Of The Rectangle\n");
            scanf("%f", &lor);
            printf("Please Input The Breadht Of The Rectangle\n");
            scanf("%f", &bor);
            printf("The Area Of This Rectangle Is %.2f\n", lor * bor);
            goto start;
        }
        else if (f == 0)
        {
            goto end;
        }

        else
        {
            printf("Please Input A Valid Number!\n");
        }
    }
end:
    return 0;
}
