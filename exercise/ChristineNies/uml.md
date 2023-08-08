## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:


```mermaid
sequenceDiagram
Nies ->> Chan: Hello Chan, how are you?
Chan-->>Zamri: How about you Zamri?
Chan--x Nies: I am good thanks!
Chan-x Zamri: I am good thanks!
Note right of Zamri: Chan thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Chan-->Nies: Checking with Zamri...
Nies->Zamri: Yes... Zamri, how are you?
