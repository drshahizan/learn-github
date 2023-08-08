You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Shidah ->> Zuraini: Hello Bob, how are you?
Zuraini-->>Azizah: How about you John?
Zuraini--x Shidah: I am good thanks!
Zuraini-x Azizah: I am good thanks!
Note right of John: Bob thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Zuraini-->Shidah: Checking with John...
Shidah->Azizah: Yes... John, how are you?

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
