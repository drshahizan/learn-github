```mermaid
sequenceDiagram
Foad ->> Firoz: Hello Bob, how are you?
Firoz -->>Johan: How about you John?
Firoz --x Foad: I am good thanks!
Firoz -x Johan: I am good thanks!
Note right of John: Bob thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Foad -->Firoz: Checking with John...
Foad->Johan: Yes... John, how are you?
```
