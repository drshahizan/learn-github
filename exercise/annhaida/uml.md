## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Haida ->> Firoz: Hello Firoz, how are you?
Firoz-->>Hidayah: How about you Hidayah?
Firoz--x Haida: I am good thanks!
Firoz-x Hidayah: I am good thanks!
Note right of Hidayah: Firoz thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Firoz-->Haida: Checking with Hidayah...
Haida->Hidayah: Yes... Hidayah, how are you?
```
