# 1143. Longest Common Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Time](https://img.shields.io/badge/Time-O%28n%29-blue)
![Space](https://img.shields.io/badge/Space-O%28n%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/longest-common-subsequence/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 44 ms | `██░░░░░░░░` **19.2%** |
| Memory  | 27.6 MB | `██░░░░░░░░` **17.3%** |

## Complexity

| | Complexity | Why |
|---|---|---|
| ⏱️ Time  | **O(n)** | recursive traversal, each element visited once |
| 💾 Space | **O(n)** | stores input-dependent data in an auxiliary structure |

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

- `1 <= text1.length, text2.length <= 1000`
- `text1 and text2 consist of only lowercase English characters.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/longest-common-subsequence/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-08-31*
