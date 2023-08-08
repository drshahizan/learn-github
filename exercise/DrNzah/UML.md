## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
nzah ->> Along: Hello Along, how are you?
Along-->>shidah: How about you shidah?
Along--x nzah: I am good thanks!
Along-x shidah: I am good thanks!
Note right of shidah: Along thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Along-->nzah: Checking with shidah...
nzah->shidah: Yes... shidah, how are you?
```
