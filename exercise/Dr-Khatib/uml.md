
## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Khatib->> Alif: Hello Alif, how are you?
Alif-->>Pang: How about you Pang?
Alif--x Khatib: I am good thanks!
Alif-x Pang: I am good thanks!
Note right of Pang: Alif thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Alif-->Khatib: Checking with Pang...
Khatib->Pang: Yes... Pang, how are you?
```

```mermaid

And this will produce a flow chart:

graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D


