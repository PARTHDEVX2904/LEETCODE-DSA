# 295. Find Median from Data Stream

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)
![Time](https://img.shields.io/badge/Time-O%281%29-blue)
![Space](https://img.shields.io/badge/Space-O%28n%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/find-median-from-data-stream/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 72 ms | `██████░░░░` **61.7%** |
| Memory  | 148.7 MB | `███░░░░░░░` **30.1%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(1)** | no input-dependent iteration |
| 💾 Space | **O(n)** | stores input-dependent data in an auxiliary structure |

> ⚠️ _Complexity is **estimated** by static analysis of the code (loop nesting, sorting, recursion) — verify before relying on it._

<details open>
<summary>📈 How this scales</summary>

**⏱️ Time — `O(1)`**

```mermaid
xychart-beta
    title "Time growth — O(1)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Operations"
    line [1, 1, 1, 1]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **operations** | 1 | 1 | 1 | 1 |

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

- `-10^5 <= num <= 10^5`
- `There will be at least one element in the data structure before calling findMedian.`
- `At most 5 * 10^4 calls will be made to addNum and findMedian.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/find-median-from-data-stream/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-07-23*
