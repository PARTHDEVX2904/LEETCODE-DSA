# 3720. Lexicographically Smallest Permutation Greater Than Target

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n³%29-blue)
![Space](https://img.shields.io/badge/Space-O%28n%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 4 ms | `██████░░░░` **58.3%** |
| Memory  | 11.4 MB | `████░░░░░░` **42.3%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n³)** | three nested loops over the input |
| 💾 Space | **O(n)** | stores input-dependent data in an auxiliary structure |

> ⚠️ _Complexity is **estimated** by static analysis of the code (loop nesting, sorting, recursion) — verify before relying on it._

<details open>
<summary>📈 How this scales</summary>

**⏱️ Time — `O(n³)`**

```mermaid
xychart-beta
    title "Time growth — O(n³)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Operations"
    line [1000, 1000000, 125000000, 1000000000]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **operations** | 1,000 | 1,000,000 | 125,000,000 | 1,000,000,000 |

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

- `1 <= s.length == target.length <= 300`
- `s and target consist of only lowercase English letters.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-28*
