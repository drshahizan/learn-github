# Hello world!
## Hello world!
### Hello world!
#### Hello world!

This is my Github exercise
Certainly! Here's a simple table with two columns for "Name" and "Address":

I've updated the table to include a new column for "Salary" and added sample data:

| **Name**         | **Address**              | **Salary**      |
|-------------------|:--------------------------:|--------------:|
| John Doe          | 123 Main Street, Anytown | $50,000/year    |
| Jane Smith        | 456 Elm Avenue, Cityville | $60,000/year    |
| Muhammad Ali      | 789 Oak Road, Metro City | $55,000/year    |


*~~Hello world~~*

## KaTeX

You can render LaTeX mathematical expressions using [KaTeX](https://khan.github.io/KaTeX/):

The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about **LaTeX** mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).
>


## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Haziq ->> Bob: Hello Bob, how are you?
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
