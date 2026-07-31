# Longest Common Prefix (LeetCode 14)

## Problem Statement

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

---

## Examples

### Example 1

**Input**
```text
strs = ["flower","flow","flight"]
```

**Output**
```text
"fl"
```

### Example 2

**Input**
```text
strs = ["dog","racecar","car"]
```

**Output**
```text
""
```

**Explanation**

There is no common prefix among the input strings.

---

## Constraints

- 1 <= strsSize <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters.

---

## Approach

1. Use the first string as the reference.
2. Compare each character of the first string with the corresponding character in every other string.
3. If a mismatch is found or any string reaches the null character (`'\0'`), terminate the first string at that position by inserting `'\0'`.
4. Return the modified first string as the longest common prefix.

---

## Algorithm

- Traverse each character of the first string.
- Compare that character with the same position in every other string.
- If all characters match, continue.
- Otherwise, terminate the string and return the common prefix.

---

## Time Complexity

**O(N × M)**

- **N** = Number of strings
- **M** = Length of the shortest string (or longest common prefix)

---

## Space Complexity

**O(1)**

No extra memory is used.

---

## Author

**Madhanraj B**
