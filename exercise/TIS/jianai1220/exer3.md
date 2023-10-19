The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about **LaTeX** mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).

## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Jian Ai ->> Laura: Hello Laura, how are you?
Laura-->>Angelia: How about you Angelia?
Laura--x Jian Ai: I am good thanks!
Laura-x Angelia: I am good thanks!
Note right of Angelia: Laura thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Laura-->Jian Ai: Checking with Angelia...
Jian Ai->Angelia: Yes... Angelia, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```

This will produce a mind map:

```mermaid
mindmap
  root((UTM))
    Background
      Used to be in KL
      ::icon(fa fa-book)
      Founded in 1904
        As a technical school
    Research
      On effectiveness<br/>and features
      On Automatic creation
        Uses
            Creative techniques
            Strategic planning
            Argument mapping
    Tools
      Pen and paper
      Mermaid
```
