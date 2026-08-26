# 435. Non-overlapping Intervals

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n log n%29-blue)
![Space](https://img.shields.io/badge/Space-O%281%29-blueviolet)
![Language](https://img.shields.io/badge/Python3-3776AB?logo=python&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/non-overlapping-intervals/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 67 ms | `████████░░` **83.0%** |
| Memory  | 49 MB | `████████░░` **79.2%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n log n)** | a sort dominates the linear scan |
| 💾 Space | **O(1)** | only a constant number of variables |

> ⚠️ _Complexity is **estimated** by static analysis of the code (loop nesting, sorting, recursion) — verify before relying on it._

<details open>
<summary>📈 How this scales</summary>

**⏱️ Time — `O(n log n)`**

```mermaid
xychart-beta
    title "Time growth — O(n log n)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Operations"
    line [33, 664, 4483, 9966]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **operations** | 33 | 664 | 4,483 | 9,966 |

**💾 Space — `O(1)`**

```mermaid
xychart-beta
    title "Space growth — O(1)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Auxiliary space"
    line [1, 1, 1, 1]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **space units** | 1 | 1 | 1 | 1 |

</details>

## Constraints

- `1 <= intervals.length <= 10^5`
- `intervals[i].length == 2`
- `-5 * 10^4 <= start_i < end_i <= 5 * 10^4`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/non-overlapping-intervals/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-26*
