# Assignment-2
## Project Description

This project implements a **Sparse Matrix using an array-based approach in C++**. A sparse matrix is a matrix that contains mostly zero values. Instead of storing all elements, we store only non-zero values along with their row and column indices to save memory and increase performance.

---

##  Data Structure

Each non-zero element is stored as a structure with:
- `row` – the row index
- `col` – the column index
- `value` – the non-zero value

An array of these structures is used to represent the entire sparse matrix.

---

## Features

- Store non-zero elements only
- Display full matrix form
- Simple and efficient implementation
- Dynamic memory allocation
- Input validation for rows/columns

---

## How to Run

### Compile:

```bash
g++ sparse_matrix.cpp -o sparse_matrix
