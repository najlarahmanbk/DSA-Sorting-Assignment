# Complexity Analysis

## Merge Sort

Merge Sort divides the array into smaller subarrays, recursively sorts them, and then merges the sorted subarrays.

### Number of Passes / Merge Levels

For 8 elements:

log2(8) = 3

Therefore, there are 3 merge-pass levels.

The execution performs 7 individual merge operations.

### Comparisons for Given Input

Key comparisons = 17

### Major Operations

Writes to the main array during merging = 24

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

### Space Complexity

Additional auxiliary space = O(n)

### Other Properties

- Stable: Yes
- In-place: No
- Predictable running time: Yes

---

## Quick Sort

Quick Sort selects a pivot, partitions the array around the pivot, and recursively sorts the two resulting parts.

The implementation uses the last element as the pivot.

### Number of Partitions

For the given input:

Number of partitions = 5

### Comparisons for Given Input

Key comparisons = 16

### Major Operations

- Swap calls = 12
- Non-self exchanges = 6

### Time Complexity

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

### Space Complexity

- Average recursion stack: O(log n)
- Worst-case recursion stack: O(n)
- Array rearrangement is in-place apart from recursion stack

### Other Properties

- Stable: No, in general
- In-place: Yes, except for recursion stack
- Average-case performance: Good
- Worst-case performance: Can degrade to O(n²)
