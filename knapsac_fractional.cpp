//knapsac_fractional_algorithum......

#include <stdio.h>
int main()
{
    int capacity, no_items, cur_weight, item;
    float total_profit;
    int i;
    printf("Enter the maximum capacity :- ");
    scanf("%d", &capacity);

    printf("Enter the number of items :-");
    scanf("%d", &no_items);
    int used[no_items];
    int weight[no_items];
    int value[no_items];

    printf("\nEnter the weight and value of %d item \n\n", no_items);
    for (i = 0; i < no_items; i++)
    {
        printf("enter the waight of [%d] element :-", i);
        scanf("%d", &weight[i]);
        printf("enter the Value of [%d] element :-", i);
        scanf("%d", &value[i]);
        printf("\n");
    }

    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];
        if (cur_weight >= 0)
            printf("Added object %d (%d Rs., %dKg) completely in the bag . Space left = [%d]\n", item + 1, value[item], weight[item], cur_weight);
        else
        {
            int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, value[item], weight[item], item + 1);
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }

    printf("Filled the bag with objects worth %.2f Rs.\n", total_profit);
}
