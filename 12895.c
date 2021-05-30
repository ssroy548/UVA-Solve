#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, rem, result = 0, n = 0 ,t;

    scanf("%d",&t);
    while(t--){
        scanf("%d", &num);

         temp = num;

        while (temp != 0)
        {
            temp /= 10;
            ++n;
        }

        temp = num;

        while (temp != 0)
        {
            rem = temp%10;
            result += pow(rem, n);
            temp /= 10;
        }

        if(result == num)
            printf("Armstrong\n", num);
        else
            printf("Not Armstrong\n", num);

            n =0;
            result = 0;
        }


    return 0;
}

