## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
ZHANJingchun ->> Yida: Hello Yida, how are you?
Yida-->>John: How about you John?
Yida--x ZHANJingchun: I am good thanks!
Yida-x John: I am good thanks!
Note right of John: Yida thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Yida-->ZHANJingchun: Checking with John...
ZHANJingchun->John: Yes... John, how are you?
```
