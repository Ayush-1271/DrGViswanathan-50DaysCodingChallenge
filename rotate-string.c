bool rotateString(char* s, char* goal) {
    int len_s = strlen(s);
    int len_goal = strlen(goal);

    if (len_s != len_goal) return false;

    // Allocate memory for s + s + null terminator
    char doubled[201];  // Since max length of s is 100, s + s = 200
    strcpy(doubled, s);
    strcat(doubled, s);

    return strstr(doubled, goal) != NULL;
}
