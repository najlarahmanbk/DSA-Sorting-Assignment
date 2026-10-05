DSA Sorting Assignment — Merge Sort and Quick Sort

Objective

This assignment implements and compares Merge Sort and Quick Sort using the assigned fixed-length IDs.

Assigned Input

324, 125, 456, 218, 102, 389, 275, 147

Algorithms

1. Merge Sort
2. Quick Sort

Final Sorted Output

Both algorithms produce:

102, 125, 147, 218, 275, 324, 389, 456

Repository Contents

- "src/" — C source programs
- "input/" — assigned input data
- "output/" — program execution outputs
- "trace/" — important intermediate steps and trace tables
- "analysis/" — complexity analysis, comparison table and conclusion

How to Compile and Run

Merge Sort

gcc -std=c11 -Wall -Wextra -pedantic src/merge_sort.c -o merge_sort
./merge_sort

Quick Sort

gcc -std=c11 -Wall -Wextra -pedantic src/quick_sort.c -o quick_sort
./quick_sort

On Windows, run the generated executables as "merge_sort.exe" and "quick_sort.exe".

Result

Both algorithms correctly sort the assigned input.

Merge Sort provides guaranteed "O(n log n)" running time and requires "O(n)" auxiliary memory.

Quick Sort has "O(n log n)" average time and works in-place, but the last-element-pivot implementation can degrade to "O(n²)" for unfavourable input.

For large fixed-length keys, Merge Sort is preferred when predictable performance and stability are important.
