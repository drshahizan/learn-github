## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Firoz ->> Foad: Hello Bob, how are you?
Foad-->>Shahizan: How about you John?
Foad--x Firoz: I am good thanks!
Foad-x Shahizan: I am good thanks!
Note right of John: Bob thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Foad-->Firoz: Checking with John...
Firoz->Shahizan: Yes... John, how are you?

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
