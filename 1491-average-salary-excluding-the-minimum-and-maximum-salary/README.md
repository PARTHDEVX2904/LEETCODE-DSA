# 1491. Average Salary Excluding the Minimum and Maximum Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Time](https://img.shields.io/badge/Time-O%28n log n%29-blue)
![Space](https://img.shields.io/badge/Space-O%281%29-blueviolet)
![Language](https://img.shields.io/badge/Python3-3776AB?logo=python&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 0 ms | `██████████` **100.0%** |
| Memory  | 19.3 MB | `█████████░` **85.5%** |

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

- `3 <= salary.length <= 100`
- `1000 <= salary[i] <= 10^6`
- `All the integers of salary are unique.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-26*
