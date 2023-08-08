## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Dayah ->> Adila: Hello Adila, how are you?
Adila-->>John: How about you John?
Adila--x Dayah: I am good thanks!
Adila-x John: I am good thanks!
Note right of John: Adila thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Adila-->Dayah: Checking with John...
Dayah->John: Yes... John, how are you?
```
