## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Haris ->> graby: Hello graby, how are you?
graby-->>John: How about you John?
graby--x Haris: I am good thanks!
graby-x John: I am good thanks!
Note right of John: graby thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

graby-->Haris: Checking with John...
Haris->John: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
