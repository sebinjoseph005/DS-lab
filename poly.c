#include <stdio.h>
#include <stdlib.h>

struct node {
    int coef;
    int expo;
    struct node* link;
};
struct node* createNode(int coef, int expo) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->coef = coef;
    newNode->expo = expo;
    newNode->link = NULL;
    return newNode;
}

void printPolynomial(struct node* head) {
    struct node* p = head;
    while (p != NULL) {
        if (p->link == NULL) {
            printf("%dX^%d", p->coef, p->expo);
        } else {
            printf("%dX^%d + ", p->coef, p->expo);
        }
        p = p->link;
    }
    printf("\n");
}

int main() {
    int no1, no2, i, coef1, expo1;
    struct node* rhead = NULL; // Resultant polynomial head
    struct node* phead = NULL; // First polynomial head
    struct node* qhead = NULL; // Second polynomial head
    struct node* r = NULL; // Pointer for result
    struct node* p = NULL; // Pointer for first polynomial
    struct node* q = NULL; // Pointer for second polynomial

    // Input first polynomial
    printf("Enter the number of terms in polynomial 1: ");
    scanf("%d", &no1);
    if (no1 != 0) {
        printf("Enter the terms of the 1st polynomial in descending order:\n");
        for (i = 0; i < no1; i++) {
            printf("Enter the coefficient of term %d: ", i + 1);
            scanf("%d", &coef1);
            printf("Enter the exponent of term %d: ", i + 1);
            scanf("%d", &expo1);
            struct node* temp = createNode(coef1, expo1);
            if (phead == NULL) {
                phead = temp;
                p = temp;
            } else {
                p->link = temp;
                p = temp;
            }
        }
    }

    // Input second polynomial
    printf("Enter the number of terms in polynomial 2: ");
    scanf("%d", &no2);
    if (no2 != 0) {
        printf("Enter the terms of the 2nd polynomial in descending order:\n");
        for (i = 0; i < no2; i++) {
            printf("Enter the coefficient of term %d: ", i + 1);
            scanf("%d", &coef1);
            printf("Enter the exponent of term %d: ", i + 1);
            scanf("%d", &expo1);
            struct node* temp = createNode(coef1, expo1);
            if (qhead == NULL) {
                qhead = temp;
                q = temp;
            } else {
                q->link = temp;
                q = temp;
            }
        }
    }
