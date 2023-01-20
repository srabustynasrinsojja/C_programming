#include<stdio.h>
struct company {
        char name[100];
        float income;
        float cost;


};
int main() {
    struct company p[20];
    int i;

    for(i=0;i<5;i++) {
        printf("Person %d:\n",i+1);
         printf("Enter name: \n");
          fgets(p[i].name);
         printf("Enter Income: ");
         scanf("%f",&p[i].income);
         printf("Enter Cost: ");
         scanf("%f",&p[i].cost);

    }

    for(i=0;i<5;i++) {
        printf("\n\nPerson %d:\n",i+1);
        printf("name: %s\n", p[i].name);
        printf("Profit: %.2f",p[i].income-p[i].cost);

    }
return 0;
}
