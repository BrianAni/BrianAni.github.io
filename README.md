# BrianAni.github.io
This glorious GitHub account was created by my dear school account.
Henceforth, it shall be contained with my future assignments.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Set Range (e.g., 1 to 100)]
    B --> C[Generate Random Number]
    C --> D[Prompt User for a Guess]
    D --> E{Is Input Valid?}
    E -->|No| F[Display Error: "Invalid input, try again"]
    F --> D
    E -->|Yes| G[Compare Guess with Random Number]
    G --> H{Is Guess Correct?}
    H -->|Yes| I[Display "Correct! You Win"]
    I --> J([End])
    H -->|No| K{Is Guess Too High?}
    K -->|Yes| L[Display "Too High"]
    L --> D
    K -->|No| M[Display "Too Low"]
    M --> D
