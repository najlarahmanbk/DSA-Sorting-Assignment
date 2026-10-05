# Merge Sort vs Quick Sort

| Criterion | Merge Sort | Quick Sort (this implementation) |
|---|---|---|
| Core method | Split, sort halves, then merge | Partition around a pivot, then recurse |
| Work for this input | 3 merge-pass levels; 7 merges | 5 partitions |
| Key comparisons for this input | 17 | 16 |
| Other recorded operations | 24 writes to the main array during merging | 12 swap calls; 6 exchange distinct positions |
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Extra space | O(n) | O(log n) average stack; O(n) worst-case stack |
| Stable | Yes | No, in general |
| In-place | No | Yes, except for recursion stack |
| Main advantage | Predictable guaranteed running time and stability | Usually low memory use and strong practical performance |
| Main limitation | Requires extra temporary storage | Pivot selection can cause quadratic time |
