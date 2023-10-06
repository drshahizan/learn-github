<a href="https://github.com/drshahizan/learn-github/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/learn-github" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/network/members"><img src="https://img.shields.io/github/forks/drshahizan/learn-github" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/learn-github" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/issues"><img src="https://img.shields.io/github/issues/drshahizan/learn-github" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/learn-github?color=2b9348"></a>
![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan%2Flearn-github&labelColor=%23d9e3f0&countColor=%23697689&style=flat)

🌟 Hit star button to save this repo in your profile

# GitHub: Step-by-Step Guide

## 5. Writing on GitHub
Writing on GitHub involves various tasks to enhance your repositories and profile. You can create or edit your profile README to provide information. Add images using Markdown syntax. Utilize tables for structured data representation. Create collapsible sections with HTML tags. Include quotes using Markdown blockquote syntax. Leave comments on specific lines or sections. Use Mermaid diagrams, GeoJSON and TopoJSON maps, and STL 3D models to visualize data. Remember to save your work by committing and pushing changes to ensure they are saved and backed up. These features enhance your GitHub experience and facilitate effective communication and presentation of your projects.

### 5.1 Creating or editing your profile README

1. Log in to your GitHub account.
2. Navigate to your profile by clicking on your profile picture in the top-right corner of the screen.
3. On your profile page, click on the "Add a README" button, or if you already have a README file, click on the pencil icon to edit it.
4. GitHub will open the README file in the Markdown editor.

#### Sample Markdown code for your profile README:

```markdown
# My Profile

## About Me
Hello, I'm [Your Name], a passionate developer from [Your Location]. I specialize in [Your Areas of Expertise]. I love to learn and explore new technologies to solve interesting challenges.

## Projects
Here are some of my notable projects:

- [Project 1](link-to-project-1): Description of Project 1.
- [Project 2](link-to-project-2): Description of Project 2.
- [Project 3](link-to-project-3): Description of Project 3.

## Skills
- Programming Languages: Java, Python, JavaScript
- Frameworks: React, Node.js
- Databases: MySQL, MongoDB
- Version Control: Git

## Contact Me
Feel free to reach out to me via email at [your-email@example.com]. Let's connect and collaborate on exciting projects!

```

5. Write or modify the content of your README using Markdown syntax.
6. Format the text using headings (`#`), lists (`-` or `1.`), bold (`**`), italic (`*`), code snippets (`` `code` ``), and other Markdown features.
7. Preview your changes by clicking on the "Preview" tab to see how your README will look.
8. Make any necessary adjustments to the content or formatting.
9. Once you are satisfied with your changes, click on the "Commit changes" button at the bottom of the page.
10. GitHub will save your changes and update your profile README.
11. Refresh your profile page to see the updated README displayed.

### 5.2 Adding an image

Use the following Markdown syntax to add the image:

   ```markdown
   ![Alt Text](image_url)
   ```

   Replace `Alt Text` with a descriptive alternative text for the image, and `image_url` with the URL of the image you want to add. You can use an image hosting service or the direct URL of an image file in your repository.

   For example:
   ```markdown
   ![Youtube](../images/youtube64.png)
   ```
  
   ![Youtube](../images/youtube64.png)
 

Note that the `Alt Text` is used to provide alternative text for the image, which is important for accessibility purposes.

> Make sure to replace `image_url` with the actual URL of your image. You can upload the image to an image hosting service or use the direct URL of the image file in your repository.

## 5.3 Adding a table

To add a table, use the following markdown syntax:

   ```markdown
   | Header 1 | Header 2 |
   | -------- | -------- |
   | Content 1| Content 2|
   | Content 3| Content 4|
   ```

   Replace `Header 1`, `Header 2`, `Content 1`, `Content 2`, `Content 3`, etc. with your desired table headers and content. You can add or remove rows by adding or deleting additional lines following the same format.

   For example:

   | Name     | Age |
   | -------- | --- |
   | Shah     | 25  |
   | Aiman    | 28  |
  

## 5.4 Adding a collapsed section

To add a collapsed section, use the following markdown syntax:

   ```markdown
   <details>
   <summary>Click to expand</summary>

   Content goes here. This can include text, images, links, or any other markdown elements.

   </details>
   ```

   Replace "Click to expand" with the desired summary text that will be displayed as the collapsed section's title. You can add any content within the `<details>` and `</details>` tags, such as text, images, links, or other Markdown elements.

   For example:

   <details>
   <summary>More details</summary>

   This is the expanded content of the collapsed section. You can include any Markdown elements here.

   - List item 1
   - List item 2

   </details>

> You can have multiple collapsed sections in your README by repeating the `<details>` and `</details>` tags.

## 5.5 Adding a quote

To add a quote, use the following markdown syntax:

   ```markdown
   > Quote text goes here.
   > - Author
   ```

   Replace "Quote text goes here" with the desired quote text and "Author" with the name of the quote's author. You can also include multiple lines within the quote by using additional `>` symbols.

   For example:

   ```markdown
   > Success is not final, failure is not fatal: It is the courage to continue that counts.
   > - Winston Churchill
   ```

   > Success is not final, failure is not fatal: It is the courage to continue that counts.
   > - Winston Churchill
   

## 5.6 Adding a comment

To add a comment, use the following markdown syntax:

   ```markdown
   <!-- Comment text goes here -->
   ```

   Replace "Comment text goes here" with your desired comment. Comments in Markdown are not visible when the README is rendered, but they can be useful for adding notes or explanations to your code.

   For example:
   ```markdown
   <!-- This section is under development. Please check back later for updates. -->
   ```

   <!-- This section is under development. Please check back later for updates. -->
   

> Comments in Markdown are helpful for adding contextual information to your README file without affecting its appearance when rendered. Keep in mind that comments are meant for developers or collaborators reading the Markdown source, and they are not visible in the final rendered version of the README.

## 5.7 Creating diagrams: Mermaid diagrams, GeoJSON and TopoJSON maps, and STL 3D models

To create a Mermaid diagram, use the following markdown syntax:

### a. Mermaid Diagrams:
   Use the following Markdown syntax to create a Mermaid diagram:

   ```
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```


```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```

   Replace the content within the ```mermaid``` code block with your own Mermaid diagram code. You can create various types of diagrams such as flowcharts, sequence diagrams, and more.

   For example:

   ```markdown
   graph LR
     A[Start] --> B{Condition}
     B -- Yes --> C[Result 1]
     B -- No --> D[Result 2]
   ```


   ```mermaid
   graph LR
     A[Start] --> B{Condition}
     B -- Yes --> C[Result 1]
     B -- No --> D[Result 2]
   ```

### b. GeoJSON Maps:
   Use the following Markdown syntax to embed a GeoJSON map:

 ```markdown
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
              [-90,35],
              [-90,30],
              [-85,30],
              [-85,35],
              [-90,35]
          ]
        ]
      }
    }
  ]
}
```


```geojson
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
              [-90,35],
              [-90,30],
              [-85,30],
              [-85,35],
              [-90,35]
          ]
        ]
      }
    }
  ]
}
```

### c. Using TopoJSON
You can create a TopoJSON map by specifying coordinates and shapes.

```
{
  "type": "Topology",
  "transform": {
    "scale": [0.0005000500050005, 0.00010001000100010001],
    "translate": [100, 0]
  },
  "objects": {
    "example": {
      "type": "GeometryCollection",
      "geometries": [
        {
          "type": "Point",
          "properties": {"prop0": "value0"},
          "coordinates": [4000, 5000]
        },
        {
          "type": "LineString",
          "properties": {"prop0": "value0", "prop1": 0},
          "arcs": [0]
        },
        {
          "type": "Polygon",
          "properties": {"prop0": "value0",
            "prop1": {"this": "that"}
          },
          "arcs": [[1]]
        }
      ]
    }
  },
  "arcs": [[[4000, 0], [1999, 9999], [2000, -9999], [2000, 9999]],[[0, 0], [0, 9999], [2000, 0], [0, -9999], [-2000, 0]]]
}
```

```topojson
{
  "type": "Topology",
  "transform": {
    "scale": [0.0005000500050005, 0.00010001000100010001],
    "translate": [100, 0]
  },
  "objects": {
    "example": {
      "type": "GeometryCollection",
      "geometries": [
        {
          "type": "Point",
          "properties": {"prop0": "value0"},
          "coordinates": [4000, 5000]
        },
        {
          "type": "LineString",
          "properties": {"prop0": "value0", "prop1": 0},
          "arcs": [0]
        },
        {
          "type": "Polygon",
          "properties": {"prop0": "value0",
            "prop1": {"this": "that"}
          },
          "arcs": [[1]]
        }
      ]
    }
  },
  "arcs": [[[4000, 0], [1999, 9999], [2000, -9999], [2000, 9999]],[[0, 0], [0, 9999], [2000, 0], [0, -9999], [-2000, 0]]]
}
```
### d. STL 3D Models:
You can use ASCII STL syntax directly in markdown to create interactive 3D models. To display a model, add ASCII STL syntax inside a fenced code block with the stl syntax identifier. 

For example, you can create a simple 3D model:

```
solid cube_corner
  facet normal 0.0 -1.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 1.0 0.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
  facet normal 0.0 0.0 -1.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 1.0 0.0 0.0
    endloop
  endfacet
  facet normal -1.0 0.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 0.0 1.0
      vertex 0.0 1.0 0.0
    endloop
  endfacet
  facet normal 0.577 0.577 0.577
    outer loop
      vertex 1.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
endsolid
```

```stl
solid cube_corner
  facet normal 0.0 -1.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 1.0 0.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
  facet normal 0.0 0.0 -1.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 1.0 0.0 0.0
    endloop
  endfacet
  facet normal -1.0 0.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 0.0 1.0
      vertex 0.0 1.0 0.0
    endloop
  endfacet
  facet normal 0.577 0.577 0.577
    outer loop
      vertex 1.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
endsolid
```

## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/learn-github/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

[![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan&labelColor=%23697689&countColor=%23555555&style=plastic)](https://visitorbadge.io/status?path=https%3A%2F%2Fgithub.com%2Fdrshahizan)
![](https://hit.yhype.me/github/profile?user_id=81284918)
