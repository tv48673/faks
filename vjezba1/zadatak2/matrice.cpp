#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Matrix {
    int rows;
    int cols;
    float** data;
};
typedef struct Matrix Matrix;

Matrix* make_matrix(int rows, int cols) {
    Matrix* matrix = new Matrix[0];
    matrix->data = new float*[rows];
    for(int i = 0; i < rows; i++)
        matrix->data[i] = new float[cols];
    //return matrix;
    cout << "enter members of matrix: " << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++) {
            cin >> matrix->data[i][j];
        }

    matrix->rows = rows;
    matrix->cols = cols;

    return matrix;
}

void print_matrix(Matrix* m) {
    for(int x = 0; x < m->rows; x++) {
        for(int y = 0; y < m->cols; y++) {

            cout << m->data[x][y] << " " ;
        }
        cout << endl;
    }
}

Matrix* generate_matrix(int a, int b, int m, int n)
{
    Matrix* gmatrix = new Matrix[1];
    srand((unsigned) time(0));
    int randomNumber;

    gmatrix->data = new float*[m];
    for(int i = 0; i < m; i++)
        gmatrix->data[i] = new float[n];



    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) {
            randomNumber = (rand() % b) + a;
            gmatrix->data[i][j] = (float) randomNumber;
    }
    gmatrix->rows = m;
    gmatrix->cols = n;

    return gmatrix;
}



void transpose_matrix(Matrix* matrix)
{

    float tr_matrix[matrix->cols][matrix->rows];
   for (int i = 0; i < matrix->rows; ++i)
      for (int j = 0; j < matrix->cols; ++j) {
         tr_matrix[j][i] = matrix->data[i][j];
      }


   cout << "\nttranspose matrix is: " << endl;
   for (int i = 0; i < matrix->cols; ++i)
      for (int j = 0; j < matrix->rows; ++j) {
         cout << " " << tr_matrix[i][j];
         if (j == matrix->rows - 1)
            cout << endl << endl;
      }
}
void add_matrix(Matrix* matrix_1, Matrix* matrix_2) {
    int rslt[matrix_1->rows][matrix_1->cols];
    for (int i = 0;i<matrix_1->rows;i++ ) {
      for (int j = 0;j < matrix_1->cols;j++ ) {
        rslt[i][j]=matrix_1->data[i][j] + matrix_2->data[i][j];
      }

    }
    cout<<"sum is: ";
      cout<<endl;
      for(int i = 0; i < matrix_1->rows; ++i)
        for(int j = 0; j < matrix_1->cols; ++j)
        {
            cout << rslt[i][j] << "  ";
            if(j == matrix_1->cols - 1)
            cout << endl;
        }
}

void sub_matrix(Matrix* matrix_1, Matrix* matrix_2) {
    int rslt[matrix_1->rows][matrix_1->cols];
    for (int i = 0;i<matrix_1->rows;i++ ) {
      for (int j = 0;j < matrix_1->cols;j++ ) {
        rslt[i][j]=matrix_1->data[i][j] - matrix_2->data[i][j];
      }

    }
    cout<<"sum is: ";
      cout<<endl;
      for(int i = 0; i < matrix_1->rows; ++i)
        for(int j = 0; j < matrix_1->cols; ++j)
        {
            cout << rslt[i][j] << "  ";
            if(j == matrix_1->cols - 1)
            cout << endl;
        }
}

void multiply_matrix(Matrix* matrix_1, Matrix* matrix_2) {
    int rslt[matrix_1->rows][matrix_2->cols];
    if (matrix_1->cols != matrix_2->rows){
      cout <<"they cannot be multiplied";
      return ;
    }


    cout <<"multiplication of 2 matrix is: ";

    for (int i = 0; i < matrix_1->rows; i++) {
        for (int j = 0; j < matrix_2->cols; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < matrix_2->rows; k++) {
                rslt[i][j] += matrix_1->data[i][k] * matrix_2->data[k][j];
            }

            cout << rslt[i][j] << " ";
        }

        cout << endl;
    }
}

int main(void) {

    int rows, cols;

    cout<<"enter number of rows: ";
    cin >> rows;
    cout << endl;
    cout << "enter number of cols: ";
    cin >> cols;
    Matrix* matrix[2];
    matrix[0] = make_matrix(rows, cols);
    //transpose_matrix(matrix_1);
    matrix[1] = generate_matrix(1,22,3,2);
    //transpose_matrix(matrix_2);
    multiply_matrix(matrix[0], matrix[1]);
    //print_matrix(matrix[1]);
    //add_matrix(matrix[0], matrix[1]);
    sub_matrix(matrix[0], matrix[1]);



    return 0;
}
