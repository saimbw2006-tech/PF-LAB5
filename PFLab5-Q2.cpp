#include <stdio.h>

int main()
{
    int category, item, quantity;
    float price, total;

    printf("Enter category (1 for Drinks, 2 for Food): ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Choose item (1 Chai, 2 Lassi): ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    price = 80;
                    break;
                case 2:
                    price = 150;
                    break;
                default:
                    printf("Invalid item\n");
                    return 0;
            }
            break;

        case 2:
            printf("Choose item (1 Paratha, 2 Biryani, 3 Karahi): ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    price = 60;
                    break;
                case 2:
                    price = 350;
                    break;
                case 3:
                    price = 900;
                    break;
                default:
                    printf("Invalid item\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid category\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total > 2000)
    {
        total = total*0.90;
        printf("You get 10%% discount");
        printf("Pay Rs: %2.f", total);
    }
    else
    {
        printf("Total bill: Rs %.0f\n", total);
    }

    return 0;
}
