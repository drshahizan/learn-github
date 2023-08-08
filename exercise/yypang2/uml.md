## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Ahmad ->> Badawi: Hello Badawi, how are you?
Badawi-->>Johan: How about you Johan?
Badawi--x Ahmad: I am good thanks!
Badawi-x Johan: I am good thanks!
Note right of Johan: Badawi thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Badawi-->Ahmad: Checking with Johan...
Ahmad->Johan: Yes... Johan, how are you?
```

