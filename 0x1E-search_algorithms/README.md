# 0x1E-search_algorithms

This directory contains implementations of two search algorithms: Linear search and Binary search.

## 0. Linear Search

### Description
This implementation features a function that performs a linear search for a given value in an array of integers.

### Function Prototype
```c
int linear_search(int *array, size_t size, int value);
```

### Parameters
- `array`: Pointer to the first element of the array to search in.
- `size`: Number of elements in the array.
- `value`: The value to search for.

### Returns
- The function returns the index of the first occurrence of the `value`.
- If the `value` is not present in the array or if the `array` is NULL, the function returns -1.

## 1. Binary Search

### Description
This implementation features a function that performs a binary search for a given value in a sorted array of integers.

### Function Prototype
```c
int binary_search(int *array, size_t size, int value);
```

### Parameters
- `array`: Pointer to the first element of the sorted array to search in.
- `size`: Number of elements in the array.
- `value`: The value to search for.

### Returns
- The function returns the index of the `value`.
- If the `value` is not present in the array or if the `array` is NULL, the function returns -1.

### Note
- The array being searched is printed every time it changes, such as at the beginning and when searching a subarray.
