#include <stdio.h>

int main(void)
{
    int qtyOfFeastables, qtyOfNotebook;

    float priceOfFeastbales, totalPriceF;
    float priceOfNotebook, totalPriceN;

    printf("Please enter amount of Feastables: ");
    scanf("%d", &qtyOfFeastables);

    printf("Please enter price of Feastables  per unit: ");
    scanf("%f", &priceOfFeastbales);

    totalPriceF = qtyOfFeastables*priceOfFeastbales;


    printf("Please enter amount of Notebook: ");
    scanf("%d", &qtyOfNotebook);

    printf("Please enter price of Notebook Per unit: ");
    scanf("%f", &priceOfNotebook);

    totalPriceN = qtyOfNotebook*priceOfNotebook;

    printf("Item       Qty Price U. Cost\n");
    printf("Feastables %d   %.2f     %.2f\n", qtyOfFeastables, priceOfFeastbales, totalPriceF);
    printf("Notebook   %d   %.2f     %.2f\n", qtyOfNotebook, priceOfNotebook, totalPriceN);
    printf("Billed amount: %.f USD", totalPriceF+totalPriceN);


/*
Item       Qty Price U. Cost
Feastables 5   12.99    64.95
Notebook   3   3.75     18.75
Billed Amount: 84 USD
*/

    return 0;

}