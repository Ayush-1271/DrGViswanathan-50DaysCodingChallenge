int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int* trustScore = (int*)calloc(n + 1, sizeof(int));  // 1-based indexing

    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0];
        int b = trust[i][1];

        trustScore[a]--;  // person a trusts someone, so decrease score
        trustScore[b]++;  // person b is trusted, so increase score
    }

    for (int i = 1; i <= n; i++) {
        if (trustScore[i] == n - 1) {
            return i;  // this person is trusted by n-1 and trusts nobody
        }
    }

    return -1;  // no town judge found
}
