# Hello world!
## Hello world!
### Hello world!
#### Hello world!

StackEdit stores your files in your browser, which means all your files are automatically saved locally and are accessible **offline!**

- Markdown: publish the Markdown text on a website that can interpret it (**GitHub** for instance),
- HTML: publish the file converted to HTML via a Handlebars template (on a blog for example).

## SmartyPants

SmartyPants converts ASCII punctuation characters into "smart" typographic punctuation HTML entities. For example:

|                |ASCII                          |HTML                         |
|----------------|-------------------------------|-----------------------------|
|Single backticks|`'Isn't this fun?'`            |'Isn't this fun?'            |
|Quotes          |`"Isn't this fun?"`            |"Isn't this fun?"            |
|Dashes          |`-- is en-dash, --- is em-dash`|-- is en-dash, --- is em-dash|

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
Shuhada ->> Alya Balqiss: Hello Alya Balqiss, how are you?
Alya Balqiss-->>Wang Yin: How about you John?
Alya Balqiss--x Shuhada: I am good thanks!
Alya Balqiss-x Wang Yin: I am good thanks!
Note right of Wang Yin: Shuhada thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Alya Balqiss-->Shuhada: Checking with Wang Yin...
Shuhada->Wang Yin: Yes... Wang Yin, how are you?
```

And this will produce a flow chart:

```mermaid
graph LR
A[Square Rect] -- Link text --> B((Circle))
A --> C(Round Rect)
B --> D{Rhombus}
C --> D
