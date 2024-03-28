## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Abubakar ->> Mihran: Hello Mihran, how are you?
Mihran-->>Abubakar: How about you Abubakar?
Mihran--x Abubakar: I am good thanks!
Mihran-x John: I am good thanks!
Note right of Abubakar: Mihran thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Mihran-->Abubakar: Checking with Abubakar...
Abubakar->Abubakar: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```

