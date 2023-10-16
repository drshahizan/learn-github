# Hello World!
## Hello World!
### Hello World!
#### Hello World!

StackEdit stores your files in your browser, which means all your files are automatically saved locally and are accessible *offline!*

You can publish your file by opening the *Publish* sub-menu and by clicking *Publish to*. For some locations, you can choose between the following formats:

- Markdown: publish the Markdown text on a website that can interpret it (*GitHub* for instance),
- HTML: publish the file converted to HTML via a Handlebars template (on a blog for example).
## SmartyPants

SmartyPants converts ASCII punctuation characters into "smart" typographic punctuation HTML entities. For example:

|                |ASCII                          |HTML                         |
|----------------|-------------------------------|-----------------------------|
|Single backticks|'Isn't this fun?'            |'Isn't this fun?'            |
|Quotes          |"Isn't this fun?"            |"Isn't this fun?"            |
|Dashes          |-- is en-dash, --- is em-dash|-- is en-dash, --- is em-dash|

## KaTeX

You can render LaTeX mathematical expressions using [KaTeX](https://khan.github.io/KaTeX/):

The Gamma function satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about *LaTeX* mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).

## UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

mermaidsequenceDiagram
Alya ->> Shu: Hello Bob, how are you?
Shu-->>Najwa: How about you John?
Shu--x Alya: I am good thanks!
Shu-x Najwa: I am good thanks!
Note right of Najwa: Shu thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Shu-->Dina: Checking with Najwa...
Dina->John: Yes... Najwa, how are you?


And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
