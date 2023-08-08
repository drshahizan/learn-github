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

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```

## KaTeX

You can render LaTeX mathematical expressions using [KaTeX](https://khan.github.io/KaTeX/):

The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about **LaTeX** mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).
