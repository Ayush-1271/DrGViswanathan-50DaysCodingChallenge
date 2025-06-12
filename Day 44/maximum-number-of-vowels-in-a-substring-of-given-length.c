
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxVowels(char* s, int k) {
    int maxCount = 0, currentCount = 0;
    int len = strlen(s);

    // Initial window
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            currentCount++;
        }
    }

    maxCount = currentCount;

    // Slide the window
    for (int i = k; i < len; i++) {
        if (isVowel(s[i - k])) {
            currentCount--;
        }
        if (isVowel(s[i])) {
            currentCount++;
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    return maxCount;
}
