
#include <stdio.h>

#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1; 

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }

        left++;
        right--;
    }

    return 1; 
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("%s is a palindrome\n", str1);
    } else {
        printf("%s is not a palindrome\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("%s is a palindrome\n", str2);
    } else {
        printf("%s is not a palindrome\n", str2);
    }

    return 0;
}
