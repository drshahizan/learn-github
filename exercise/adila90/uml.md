## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Adila ->> HIdayah: Hello Hidayah, how are you?
HIdayah-->>John: How about you John?
Hidayah--x Adila: I am good thanks!
Hidayah-x John: I am good thanks!
Note right of John: Hidayah thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Hidayah-->Adila: Checking with John...
Adila->John: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
