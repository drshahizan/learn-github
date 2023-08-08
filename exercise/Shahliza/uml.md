## UML diagrams

You can render UML diagrams using [Shahliza](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Shahliza ->> Ali: Hello Ali, how are you?
Ali-->>Azlan: How about you Azlan?
Azlan--Ali: I am good thanks!
Mael-x Ali: I am good thanks!
Note right of Mael: Bob thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Ali-->Shahliza: Checking with John...
Shahliza->Ali: Yes... Ali, how are you?


And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
