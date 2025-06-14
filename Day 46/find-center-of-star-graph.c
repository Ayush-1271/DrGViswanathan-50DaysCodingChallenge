int findCenter(int** edges, int edgesSize, int* edgesColSize) {
    // Compare first two edges
    int a = edges[0][0];
    int b = edges[0][1];
    int c = edges[1][0];
    int d = edges[1][1];

    if (a == c || a == d) return a;
    return b; // if b matches c or d, then center is b
}
