#include <stdio.h>

int main()
{
    float percentage, testScore;

    printf("Enter Inter percentage: ");
    scanf("%f", &percentage);

    printf("Enter test score: ");
    scanf("%f", &testScore);

    if (percentage < 0 || percentage > 100 || testScore < 0 || testScore > 100)
    {
        printf("Invalid input\n");
    }
    else if (percentage < 60)
    {
        printf("Not eligible\n");
    }
    else
    {
        if (testScore >= 80)
        {
            printf("Admitted with Merit Scholarship\n");
        }
        else if (testScore >= 50)
        {
            printf("Admitted\n");
        }
        else
        {
            printf("Not admitted\n");
        }
    }

    return 0;
}
