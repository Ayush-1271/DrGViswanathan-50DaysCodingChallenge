char* convert(char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) {
        return strdup(s);  // Return a copy of the original string
    }

    int len = strlen(s);
    char** rows = (char**)malloc(numRows * sizeof(char*));
    int* lens = (int*)calloc(numRows, sizeof(int));
    
    // Allocate enough memory for each row
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc((len + 1) * sizeof(char));
        rows[i][0] = '\0'; // initialize empty string
    }

    int curRow = 0;
    int goingDown = 0;

    for (int i = 0; i < len; i++) {
        rows[curRow][lens[curRow]] = s[i];
        lens[curRow]++;
        rows[curRow][lens[curRow]] = '\0';

        if (curRow == 0 || curRow == numRows - 1)
            goingDown = !goingDown;
        
        curRow += goingDown ? 1 : -1;
    }

    // Concatenate all rows
    char* result = (char*)malloc((len + 1) * sizeof(char));
    result[0] = '\0';

    for (int i = 0; i < numRows; i++) {
        strcat(result, rows[i]);
        free(rows[i]);
    }

    free(rows);
    free(lens);

    return result;
}
