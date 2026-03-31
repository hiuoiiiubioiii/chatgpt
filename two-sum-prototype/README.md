# Two Sum Prototype Engine

A deep prototype engine for **LeetCode Q1: Two Sum** built from the full analysis stack.

## Included layers

- Problem identity
- Input-output mapping
- Logical view mapping
- Representation stack
- Memory model
- Function model
- Runtime stack model
- Invariant and proof layer
- Cost and measurement model
- Trace engine
- 15 test-case replay set

## Files

- `index.html` — static interactive prototype
- `src/two_sum_google_style.cpp` — Google-style C++ reference and brute-force baseline
- `data/test_cases.json` — 15 replay cases

## Core transform

```text
pair search
-> complement lookup
-> processed-prefix memory
-> output indices
```

## Core invariant

Before processing index `i`, the map stores all values from indices `[0 .. i-1]` mapped to valid earlier indices.
