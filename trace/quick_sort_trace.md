# Quick Sort Trace

## Input

324, 125, 456, 218, 102, 389, 275, 147

## Partition Method

The Quick Sort implementation uses the last element of each subarray as the pivot.

## Partition Trace Table

| Partition | Subarray | Pivot | Pivot Final Position | Array After Partition |
|---|---|---:|---:|---|
| 1 | 324, 125, 456, 218, 102, 389, 275, 147 | 147 | 2 | 125, 102, 147, 218, 324, 389, 275, 456 |
| 2 | 125, 102 | 102 | 0 | 102, 125, 147, 218, 324, 389, 275, 456 |
| 3 | 218, 324, 389, 275, 456 | 456 | 7 | 102, 125, 147, 218, 324, 389, 275, 456 |
| 4 | 218, 324, 389, 275 | 275 | 4 | 102, 125, 147, 218, 275, 389, 324, 456 |
| 5 | 389, 324 | 324 | 5 | 102, 125, 147, 218, 275, 324, 389, 456 |

## Important Partition Results

### Partition 1

Pivot = 147

Result:

125, 102, 147, 218, 324, 389, 275, 456

Pivot 147 is placed at position 2.

### Partition 2

Pivot = 102

Result:

102, 125, 147, 218, 324, 389, 275, 456

Pivot 102 is placed at position 0.

### Partition 3

Pivot = 456

Result:

102, 125, 147, 218, 324, 389, 275, 456

Pivot 456 is placed at position 7.

### Partition 4

Pivot = 275

Result:

102, 125, 147, 218, 275, 389, 324, 456

Pivot 275 is placed at position 4.

### Partition 5

Pivot = 324

Result:

102, 125, 147, 218, 275, 324, 389, 456

Pivot 324 is placed at position 5.

## Final Sorted Sequence

102, 125, 147, 218, 275, 324, 389, 456

## Execution Count

- Number of partitions: 5
- Key comparisons: 16
- Swap calls including self-swaps: 12
- Non-self exchanges: 6
