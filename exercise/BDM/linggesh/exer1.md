Hi! I'm your first Markdown file in **StackEdit**. If you want to learn about StackEdit, you can read me. If you want to play with Markdown, you can edit me. Once you have finished with me, you can create new files by opening the **file explorer** on the left corner of the navigation bar.

Files

StackEdit stores your files in your browser, which means all your files are automatically saved locally and are accessible **offline!**

Create files and folders

The file explorer is accessible using the button in left corner of the navigation bar. You can create a new file by clicking the **New file** button in the file explorer. You can also create folders by clicking the **New folder** button.

Rename a file

You can rename the current file by clicking the file name in the navigation bar or by clicking the **Rename** button in the file explorer.

Delete a file

You can delete the current file by clicking the **Remove** button in the file explorer. The file will be moved into the **Trash** folder and automatically deleted after 7 days of inactivity.

UML diagrams

You can render UML diagrams using [Mermaid](https://mermaidjs.github.io/). For example, this will produce a sequence diagram:

```mermaid
sequenceDiagram
Alice ->> Linggesh: Hello Linggesh, how are you?
Linggesh-->>John: How about you John?
Linggesh--x Alice: I am good thanks!
Linggesh-x John: I am good thanks!
Note right of John: Linggesh thinks a long<br/>long time, so long<br/>that the text does<br/>not fit on a row.

Linggesh-->Alice: Checking with John...
Alice->John: Yes... John, how are you?
