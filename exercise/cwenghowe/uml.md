## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Nies ->> Zamri: Hello Zamri, how are you?
Zamri-->>Chan: How about you Chan?
Zamri--x Nies: I am good thanks!
Zamri-x Chan: I am good thanks!
Note right of Chan: Zamri thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Zamri-->Nies: Checking with Chan...
Nies->Chan: Yes... Chan, how are you?
```
