# 4021. Minimum Operations to Make a Rotated Palindrome I

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n²%29-blue)
![Space](https://img.shields.io/badge/Space-O%281%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/minimum-operations-to-make-a-rotated-palindrome-i/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 255 ms | `███░░░░░░░` **25.0%** |
| Memory  | 10.7 MB | `████████░░` **83.3%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n²)** | two nested loops over the input |
| 💾 Space | **O(1)** | only a constant number of variables |

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

- `2 <= s.length <= 2000`
- `s consists only of lowercase English letters.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/minimum-operations-to-make-a-rotated-palindrome-i/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-16*
