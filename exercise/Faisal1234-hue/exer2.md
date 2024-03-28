## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Faisal ->> manir: Hello manir, how are you?
manir-->>John: How about you John?
manir--x Faisal: I am good thanks!
manir-x John: I am good thanks!
Note right of John: manir thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

manir-->Faisal: Checking with John...
Faisal->John: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
