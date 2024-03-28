## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Siti ->> Zaleha: Hello Zaleha, how are you?
Zaleha-->>John: How about you John?
Zaleha--x Siti: I am good thanks!
Zaleha-x Faizan: I am good thanks!
Note right of Faizan: Zaleha thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Zaleha-->Siti: Checking with Faizan...
Siti->Faizan: Yes... Faizan, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
S[Square Rect] -- Link text --> Z((Circle))
S --> C(Round Rect)
Z --> D{Rhombus}
C --> D
```
User Journey Diagram
User journeys describe at a high level of detail exactly what steps different users take to complete a specific task within a system, application or website. This technique shows the current (as-is) user workflow, and reveals areas of improvement for the to-be workflow. (Wikipedia)

Mermaid can render user journey diagrams:

journey
    title My working day
    section Go to work
      Make tea: 5: Me
      Go upstairs: 3: Me
      Do work: 1: Me, Cat
    section Go home
      Go downstairs: 5: Me
      Sit down: 5: Me
