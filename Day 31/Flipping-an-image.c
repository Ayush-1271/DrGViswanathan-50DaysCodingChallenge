/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    int** result = (int**)malloc(imageSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(imageSize * sizeof(int));
    
    for (int i = 0; i < imageSize; i++) {
        int cols = imageColSize[i];
        result[i] = (int*)malloc(cols * sizeof(int));
        (*returnColumnSizes)[i] = cols;
        
        for (int j = 0; j < cols; j++) {
            // Flip and invert in one step: reverse the row and invert the value
            result[i][j] = 1 - image[i][cols - 1 - j];
        }
    }

    *returnSize = imageSize;
    return result;
}
