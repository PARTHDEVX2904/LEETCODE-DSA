# 1260. Shift 2D Grid

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Time](https://img.shields.io/badge/Time-O%28n²%29-blue)
![Space](https://img.shields.io/badge/Space-O%28n%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/shift-2d-grid/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 0 ms | `██████████` **100.0%** |
| Memory  | 18.2 MB | `███████░░░` **66.3%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n²)** | two nested loops over the input |
| 💾 Space | **O(n)** | stores input-dependent data in an auxiliary structure |

> ⚠️ _Complexity is **estimated** by static analysis of the code (loop nesting, sorting, recursion) — verify before relying on it._

<details open>
<summary>📈 How this scales</summary>

**⏱️ Time — `O(n²)`**

```mermaid
xychart-beta
    title "Time growth — O(n²)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Operations"
    line [100, 10000, 250000, 1000000]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **operations** | 100 | 10,000 | 250,000 | 1,000,000 |

**💾 Space — `O(n)`**

```mermaid
xychart-beta
    title "Space growth — O(n)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Auxiliary space"
    line [10, 100, 500, 1000]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **space units** | 10 | 100 | 500 | 1,000 |

</details>

## Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m <= 50`
- `1 <= n <= 50`
- `-1000 <= grid[i][j] <= 1000`
- `0 <= k <= 100`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/shift-2d-grid/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-07-20*
