char* convertToTitle(int columnNumber) {
    int index = 0;
    char* result = (char*)malloc(10*sizeof(char));

    while (columnNumber > 0){
        columnNumber = columnNumber-1;
        result[index++] = (char)((columnNumber%26) + 'A');
        columnNumber = columnNumber/26;
    }

    result[index] = '\0';// Null-terminate the string

    //reverse the result
    for (int i=0, j=index-1; i<j; i++, j--){
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    return result;
}
