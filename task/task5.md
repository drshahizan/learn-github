<a href="https://github.com/drshahizan/learn-github/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/learn-github" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/network/members"><img src="https://img.shields.io/github/forks/drshahizan/learn-github" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/learn-github" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/issues"><img src="https://img.shields.io/github/issues/drshahizan/learn-github" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/learn-github?color=2b9348"></a>
![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan%2Flearn-github&labelColor=%23d9e3f0&countColor=%23697689&style=flat)

Don't forget to hit the :star: if you like this repo.

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
   ![Profile Image](https://example.com/profile-image.jpg)
   ```

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

   ```markdown
   | Name     | Age |
   | -------- | --- |
   | Shah     | 25  |
   | Aiman     | 28  |
   ```

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

   ```markdown
   <details>
   <summary>More details</summary>

   This is the expanded content of the collapsed section. You can include any Markdown elements here.

   - List item 1
   - List item 2

   </details>
   ```

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

> Comments in Markdown are helpful for adding contextual information to your README file without affecting its appearance when rendered. Keep in mind that comments are meant for developers or collaborators reading the Markdown source, and they are not visible in the final rendered version of the README.

## 5.7 Creating diagrams: Mermaid diagrams, GeoJSON and TopoJSON maps, and STL 3D models

To create a Mermaid diagram, use the following markdown syntax:

   a. Mermaid Diagrams:
   Use the following Markdown syntax to create a Mermaid diagram:

   ```markdown
   ```mermaid
   graph LR
     A-->B
     B-->C
     C-->A
   ```
   ```

output

   ```mermaid
   graph LR
     A-->B
     B-->C
     C-->A
  ```

   Replace the content within the ```mermaid``` code block with your own Mermaid diagram code. You can create various types of diagrams such as flowcharts, sequence diagrams, and more.

   For example:

   ```markdown
   ```mermaid
   graph LR
     A[Start] --> B{Condition}
     B -- Yes --> C[Result 1]
     B -- No --> D[Result 2]
   ```
   ```

   ```mermaid
   graph LR
     A[Start] --> B{Condition}
     B -- Yes --> C[Result 1]
     B -- No --> D[Result 2]
   ```

   b. GeoJSON and TopoJSON Maps:
   Use the following Markdown syntax to embed a GeoJSON or TopoJSON map:

   ```markdown
   ```json
   {
     "type": "FeatureCollection",
     "features": [
       {
         "type": "Feature",
         "geometry": {
           "type": "Point",
           "coordinates": [longitude, latitude]
         },
         "properties": {
           "name": "Location Name"
         }
       }
     ]
   }
   ```
   ```

   Replace the content within the ```json``` code block with your own GeoJSON or TopoJSON map data.

   c. STL 3D Models:
   Use the following Markdown syntax to embed an STL 3D model:

   ```markdown
   ```html
   <model-viewer src="path_to_stl_file.stl" alt="3D Model" auto-rotate camera-controls></model-viewer>
   ```
   ```

   Replace "path_to_stl_file.stl" with the actual path or URL of your STL 3D model file.

3. Preview your changes by clicking on the "Preview" tab to see how your README will look with the added diagram.
4. Make any necessary adjustments to the content or formatting.
5. Once you are satisfied with your changes, click on the "Commit changes" button at the bottom of the page.
6.  GitHub will save your changes and update your profile README.
7.  Refresh your profile page to see the updated README displayed with the added diagram.

> Make sure to replace the placeholder content in the Markdown code with your own diagram data, coordinates, file paths, or URLs.

## 5.8 Saving your work

## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/learn-github/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

[![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan&labelColor=%23697689&countColor=%23555555&style=plastic)](https://visitorbadge.io/status?path=https%3A%2F%2Fgithub.com%2Fdrshahizan)
![](https://hit.yhype.me/github/profile?user_id=81284918)
