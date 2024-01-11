#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
void insertPalindrome(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}
int findLargestPalindrome(struct Node* head) {
    int largestPalindrome = 0;

    while (head != NULL) {
        if (head->data > largestPalindrome) {
            largestPalindrome = head->data;
        }
        head = head->next;
    }
    return largestPalindrome;
}

int isPalindrome(int number) {
    int original = number;
    int reversed = 0;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return original == reversed;
}
int main() {
    struct Node* palindromeList = NULL;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;

            if (isPalindrome(product)) {
                insertPalindrome(&palindromeList, product);
            }
        }
    }
    int largestPalindrome = findLargestPalindrome(palindromeList);

    printf("%d", largestPalindrome);
    FILE* file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largestPalindrome);
        fclose(file);
    }

    return (0);
}
