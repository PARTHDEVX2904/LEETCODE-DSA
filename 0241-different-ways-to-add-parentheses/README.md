# 241. Different Ways to Add Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n³%29-blue)
![Space](https://img.shields.io/badge/Space-O%28n%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/different-ways-to-add-parentheses/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 3 ms | `██████░░░░` **62.7%** |
| Memory  | 14.2 MB | `█░░░░░░░░░` **12.4%** |

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

- `1 <= expression.length <= 20`
- `expression consists of digits and the operator '+', '-', and '*'.`
- `All the integer values in the input expression are in the range [0, 99].`
- `The integer values in the input expression do not have a leading '-' or '+' denoting the sign.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/different-ways-to-add-parentheses/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-25*
