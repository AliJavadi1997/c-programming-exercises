#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

bool allPositive(size_t rows, size_t cols, int mat[rows][cols], size_t rags[rows]);

int main(void) {
    const size_t rows = 3, cols = 5;

    int mat[3][5] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, -5, 0},
        {7, 8, 9, 10, 11}
    };

    size_t rags[3] = {5, 4, 3};

    bool result = allPositive(rows, cols, mat, rags);
    printf("Result: %s\n", result ? "true" : "false");

    return 0;
}


bool allPositive(size_t rows, size_t cols, int mat[rows][cols], size_t rags[rows]){
  for(size_t i = 0; i < rows; ++i){
    for(size_t j = 0; j < rags[i]; ++j){
      if(mat[i][j] <= 0){
        return false;
      }
    }
  }
  return true;
}

