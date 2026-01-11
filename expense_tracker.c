#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "expenses.txt"

typedef struct
{
    char category[50];
    float amount;
} Expense;

void add_expense(void);
void view_expenses(void);
void search_category(void);
void total_expense(void);

int main(void)
{
    int choice;

    while (1)
    {
        printf("\n===== Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Search by Category\n");
        printf("4. Total Expense\n");
        printf("5. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                add_expense();
                break;
            case 2:
                view_expenses();
                break;
            case 3:
                search_category();
                break;
            case 4:
                total_expense();
                break;
            case 5:
                printf("Thank you for using Expense Tracker.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void add_expense(void)
{
    Expense e;
    FILE *file = fopen(FILE_NAME, "a");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter category: ");
    scanf("%s", e.category);
    printf("Enter amount: ");
    scanf("%f", &e.amount);

    fprintf(file, "%s %.2f\n", e.category, e.amount);
    fclose(file);

    printf("Expense added successfully.\n");
}

void view_expenses(void)
{
    Expense e;
    FILE *file = fopen(FILE_NAME, "r");

    if (file == NULL)
    {
        printf("No expenses found.\n");
        return;
    }

    printf("\nCategory\tAmount\n");
    printf("-------------------------\n");

    while (fscanf(file, "%s %f", e.category, &e.amount) != EOF)
    {
        printf("%-10s\t%.2f\n", e.category, e.amount);
    }

    fclose(file);
}

void search_category(void)
{
    Expense e;
    char search[50];
    int found = 0;

    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL)
    {
        printf("No data available.\n");
        return;
    }

    printf("Enter category to search: ");
    scanf("%s", search);

    while (fscanf(file, "%s %f", e.category, &e.amount) != EOF)
    {
        if (strcmp(e.category, search) == 0)
        {
            printf("Found: %s - %.2f\n", e.category, e.amount);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No expenses found for this category.\n");
    }

    fclose(file);
}

void total_expense(void)
{
    Expense e;
    float total = 0;

    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL)
    {
        printf("No data available.\n");
        return;
    }

    while (fscanf(file, "%s %f", e.category, &e.amount) != EOF)
    {
        total += e.amount;
    }

    fclose(file);
    printf("Total Expense: %.2f\n", total);
}
