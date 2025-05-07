int titleToNumber(char *columnTitle) {
    int result = 0;
    int length = strlen(columnTitle);

    for (int i = 0; i < length; i++) {
        result = result * 26 + (columnTitle[i] - 'A' + 1);
    }
    
    return result;
}
