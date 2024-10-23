#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (!isalnum(str[l])) {
            l++;
       } else if (!isalnum(str[r])) {
            r--;
        } else if (tolower(str[l]) != tolower(str[r])) {
            return 0;
        } else {
            l++;
            r--;
        }
    }
    return 1;
}

int main() {
    char s[] = "A man, a plan, a canal: Panama";
    printf("%s\n%s",s, isPalindrome(s) ? "True" : "False");
    return 0;
}
