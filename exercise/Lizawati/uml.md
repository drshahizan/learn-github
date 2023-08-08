## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Liza ->> Jo: Hello Jo, how are you?
Jo-->>Adila: How about you Adila?
Jo--x Liza: I am good thanks!
Jo-x Adila: I am good thanks!
Note right of Adila: Jo thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Jo-->Liza: Checking with Adila...
Liza->Adila: Yes... John, how are you?
