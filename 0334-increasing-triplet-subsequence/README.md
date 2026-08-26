# 334. Increasing Triplet Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n%29-blue)
![Space](https://img.shields.io/badge/Space-O%281%29-blueviolet)
![Language](https://img.shields.io/badge/Python3-3776AB?logo=python&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/increasing-triplet-subsequence/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 15 ms | `██████░░░░` **59.4%** |
| Memory  | 38.8 MB | `███████░░░` **67.0%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n)** | a single pass over the input |
| 💾 Space | **O(1)** | only a constant number of variables |

> ⚠️ _Complexity is **estimated** by static analysis of the code (loop nesting, sorting, recursion) — verify before relying on it._

<details open>
<summary>📈 How this scales</summary>

**⏱️ Time — `O(n)`**

```mermaid
xychart-beta
    title "Time growth — O(n)"
    x-axis "Input size (n)" [10, 100, 500, 1000]
    y-axis "Operations"
    line [10, 100, 500, 1000]
```

| n | 10 | 100 | 500 | 1000 |
|---|---|---|---|---|
| **operations** | 10 | 100 | 500 | 1,000 |

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

- `1 <= nums.length <= 5 * 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/increasing-triplet-subsequence/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-26*
