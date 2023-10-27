## KaTeX

You can render LaTeX mathematical expressions using [KaTeX](https://khan.github.io/KaTeX/):

The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about **LaTeX** mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).


## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Alice ->> Bob: Hello Bob, how are you?
Bob-->>John: How about you John?
Bob--x Alice: I am good thanks!
Bob-x John: I am good thanks!
Note right of John: Bob thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Bob-->Alice: Checking with John...
Alice->John: Yes... John, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
```
KaTeX
You can render LaTeX mathematical expressions using KaTeX:

The Gamma function satisfying 
Γ
(
�
)
=
(
�
−
1
)
!
∀
�
∈
�
Γ(n)=(n−1)!∀n∈N is via the Euler integral

Γ
(
�
)
=
∫
0
∞
�
�
−
1
�
−
�
�
�
.
Γ(z)=∫ 
0
∞
​
 t 
z−1
 e 
−t
 dt.

You can find more information about LaTeX mathematical expressions here.

UML diagrams
You can render UML diagrams using Mermaid. For example, this will produce a sequence diagram:

Alice
Bob
John
Hello Bob, how are you?
How about you John?
I am good thanks!
I am good thanks!
Bob thinks a long
long time, so long
that the text does
not fit on a row.
Checking with John...
Yes... John, how are you?
Alice
Bob
John
And this will produce a flow chart:

Link text
Square Rect
Circle
Round Rect
Rhombus
