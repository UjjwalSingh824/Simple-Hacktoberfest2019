#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*Length of sides*/

    if (a+b>c && b+c>a && c+a>b)
        {
            if (a==b && b==c && c==a)
            {
                printf("Equilateral Triangle");
            }
            else
            {
                if(a == b || b == c || c == a)
                {
                    printf("Isosceles Triangle");
                }
                else
                {
                    if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
                    {
                        printf("Right-angle Triangle");
                    }
                    else
                    {
                        if (a!=b && b!=c && c!=a)
                        {
                            printf("Scalene Triangle");
                        }
                    }
                }
            }
        }
        else
        {
            printf("Triangle is not possible");
        }

    return 0;

}
