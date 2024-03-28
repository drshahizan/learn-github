## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Amalina ->> Afiy: Hello Bob, how are you?
Afiy-->>Kyra: How about you John?
Afiy--x Amalina: I am good thanks!
Afiy-x Kyra: I am good thanks!
Note right of Kyra: Afiy thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Afiy-->Amalina: Checking with Kyra...
Amalina->Kyra: Yes... Kyra, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
