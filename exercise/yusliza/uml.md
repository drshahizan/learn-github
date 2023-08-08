## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Yusliza ->> Junaida: Hello Junaida, how are you?
Junaida -->> Damia: How about you Damia?
Junaida --x Yusliza: I am good thanks!
Junaida-x Damia: I am good thanks!
Note right of Damia: Junaida thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Junaida-->Yusliza: Checking with Damia...
Yusliza->Damia: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
