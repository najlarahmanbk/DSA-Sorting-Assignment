# DSA Sorting Assignment — Merge Sort and Quick Sort

## Objective

This assignment implements and compares Merge Sort and Quick Sort using the assigned fixed-length IDs.

## Assigned Input

324, 125, 456, 218, 102, 389, 275, 147

## Algorithms

1. Merge Sort
2. Quick Sort

## Final Sorted Sequence

102, 125, 147, 218, 275, 324, 389, 456

## Repository Contents

- `src/merge_sort.c` — Merge Sort implementation
- `src/quick_sort.c` — Quick Sort implementation
- `input/input.txt` — Assigned input data
- `output/merge_sort_output.txt` — Merge Sort execution output
- `output/quick_sort_output.txt` — Quick Sort execution output
- `trace/merge_sort_trace.md` — Merge Sort trace table
- `trace/quick_sort_trace.md` — Quick Sort partition trace
- `analysis/complexity_analysis.md` — Complexity analysis
- `comparison/comparison_table.md` — Merge Sort vs Quick Sort comparison
- `conclusion/conclusion.md` — Final conclusion

## How to Compile and Run

### Merge Sort

```bash
gcc -std=c11 -Wall -Wextra -pedantic src/merge_sort.c -o merge_sort
./merge_sort

gcc -std=c11 -Wall -Wextra -pedantic src/quick_sort.c -o quick_sort
./quick_sort
