# 141. Linked List Cycle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)
![Time](https://img.shields.io/badge/Time-O%28n%29-blue)
![Space](https://img.shields.io/badge/Space-O%281%29-blueviolet)
![Language](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

[Problem on LeetCode](https://leetcode.com/problems/linked-list-cycle/)

## Performance

| Metric  | Value   | Beats |
|---------|---------|-------|
| Runtime | 13 ms | `██░░░░░░░░` **18.9%** |
| Memory  | 11.8 MB | `████████░░` **81.1%** |

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

- `The number of the nodes in the list is in the range [0, 10^4].`
- `-10^5 <= Node.val <= 10^5`
- `pos is -1 or a valid index in the linked-list.`

## Approach

_pending_

<details>
<summary>💡 Top community solutions</summary>

See how others approached this problem:

[Browse the highest-voted solutions on LeetCode ↗](https://leetcode.com/problems/linked-list-cycle/solutions/?orderBy=most_votes)

</details>

---
*Synced by [LeetVault](https://github.com/PARTHDEVX2904/LEETCODE-DSA) · 2026-09-05*
