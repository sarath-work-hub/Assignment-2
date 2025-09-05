#include <iostream>
using namespace std;

struct Element {
    int row;
    int col;
    int value;
};

class SparseMatrix {
private:
    Element* elements;
    int rows, cols, numElements;
public:
    SparseMatrix(int r, int c, int num) {
        rows = r;
        cols = c;
        numElements = num;
        elements = new Element[num];
    }

    void readElements() {
        cout << "Enter row, column, and value for " << numElements << " non-zero elements:\n";
        for (int i = 0; i < numElements; i++) {
            cin >> elements[i].row >> elements[i].col >> elements[i].value;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (k < numElements && elements[k].row == i && elements[k].col == j)
                    cout << elements[k++].value << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }

    ~SparseMatrix() {
        delete[] elements;
    }
};

int main() {
    int r, c, num;
    cout << "Enter dimensions of the matrix (rows cols): ";
    cin >> r >> c;
    cout << "Enter number of non-zero elements: ";
    cin >> num;

    SparseMatrix sm(r, c, num);
    sm.readElements();
    cout << "Sparse Matrix:\n";
    sm.display();

    return 0;
}
