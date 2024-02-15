#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    char word[100];
    int count[256] = {0};

    printf("Enter the character array: ");
    scanf("%s", arr);

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(arr); i++) {
        count[arr[i]]++;
    }

    int check = 1;
    for (int i = 0; i < strlen(word); i++) {
        if (count[word[i]] == 0) {
            check = 0;
            break;
        }
        count[word[i]]--;
    }

    if (check) 
    {
        printf("The word can be formed from the characters available.\n");
    } 
    else {
        printf("The word cannot be formed from the characters available.\n");
    }

    return 0;
}
