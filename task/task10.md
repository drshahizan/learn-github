<a href="https://github.com/drshahizan/learn-github/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/learn-github" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/network/members"><img src="https://img.shields.io/github/forks/drshahizan/learn-github" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/learn-github" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/issues"><img src="https://img.shields.io/github/issues/drshahizan/learn-github" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/learn-github?color=2b9348"></a>
![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan%2Flearn-github&labelColor=%23d9e3f0&countColor=%23697689&style=flat)

🌟 Hit star button to save this repo in your profile

# GitHub: Step-by-Step Guide

## 10. GitHub Pages

### 10.1 Setting up a GitHub Pages website

1. Sign in to your GitHub account and navigate to the repository where you want to create the GitHub Pages website.

2. Click on the "Settings" tab located at the top of the repository page.

3. Scroll down to the "GitHub Pages" section in the settings page.

4. Under the "Source" section, select the branch you want to use for your GitHub Pages site. The default option is often the "main" branch, but you can choose any other branch if needed.

5. After selecting the branch, click on the "Save" button. GitHub will save the changes and automatically publish your GitHub Pages site using the selected branch.

6. GitHub will display a green success message indicating that your site is ready to be published. It will also provide you with the URL where your GitHub Pages website is hosted.

7. Optionally, you can customize the settings for your GitHub Pages site. You can choose a theme for your site, add a custom domain, or enable HTTPS.

8. To access your GitHub Pages website, open a web browser and enter the URL provided by GitHub. It will typically follow the format `https://<username>.github.io/<repository-name>`, where `<username>` is your GitHub username and `<repository-name>` is the name of your repository.

9. GitHub Pages uses Jekyll as the default static site generator. You can create or edit Markdown files in your repository to add content to your site. Any changes you make to the repository will automatically update your GitHub Pages website.

> By following these steps, you can set up a GitHub Pages website to showcase your projects, documentation, or personal portfolio. Remember to regularly update and maintain your site to keep it relevant and engaging for your audience.

### 10.2 Creating and publishing web content using Markdown and Jekyll

1. Create a new file in your GitHub repository with a `.md` or `.markdown` extension. For example, you can create a file called `index.md` for your homepage.

2. Open the newly created Markdown file and start writing your content using Markdown syntax. Markdown allows you to format text, add headings, lists, links, images, and more. Here's an example of Markdown code for a simple webpage:

```markdown
# Welcome to My Website

## About Me

I'm a web developer passionate about creating awesome websites.

## My Projects

- [Project 1](https://example.com/project1)
- [Project 2](https://example.com/project2)

## Contact Me

You can reach me at [email@example.com](mailto:email@example.com).
```

3. Save the Markdown file and commit it to your repository.

4. Create a file named `_config.yml` in the root directory of your repository. In the `_config.yml` file, you can specify Jekyll configuration settings, such as the theme to use, additional plugins, and more. Here's an example of a basic `_config.yml` file:

```yaml
# _config.yml

theme: jekyll-theme-cayman
```

5. Commit the `_config.yml` file to your repository.

6. GitHub Pages will automatically detect the presence of Jekyll configuration and process your Markdown files to generate a static website. This process may take a few moments.

7. Once the site generation is complete, you can access your website by visiting `https://drshahizan.github.io/<repository-name>`, where `<repository-name>` is the name of your repository. For example, if your repository is called `my-website`, the URL would be `https://drshahizan.github.io/my-website`.

> By following these steps and writing content in Markdown, you can create and publish web content on GitHub Pages using Jekyll. Remember to commit and push your changes to your repository to update your website with new content.

### 10.3 Customizing your GitHub Pages site

1. Go to your GitHub repository that hosts your GitHub Pages site.

2. In the root directory of your repository, create a new file called `index.html`. This file will serve as the main HTML file for your custom site.

3. Open the `index.html` file and add your custom HTML code to structure and design your site. You can include CSS styles, JavaScript code, and any other web elements you want to display on your site.

4. Save the `index.html` file and commit it to your repository.

5. GitHub Pages will automatically detect the presence of the `index.html` file and use it as the main page for your site.

6. To further customize the appearance of your site, you can create a new CSS file and link it to your HTML file. For example, create a file called `styles.css` in the root directory of your repository.

7. In your `index.html` file, add a `<link>` tag in the `<head>` section to link your custom CSS file. For example:

   ```html
   <link rel="stylesheet" href="styles.css">
   ```

8. Open the `styles.css` file and add your custom CSS code to define the styles for your site elements. You can modify colors, fonts, layout, and other visual aspects of your site using CSS.

9. Save the `styles.css` file and commit it to your repository.

10. GitHub Pages will now apply the custom styles from your `styles.css` file to your site.

#### Source code
a. HTML
```html
<!-- index.html -->

<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h1>Welcome to My Custom GitHub Pages Site!</h1>
    <p>This is a sample custom GitHub Pages site.</p>
</body>
</html>
```

b. CSS
```css
/* styles.css */

body {
    background-color: #f1f1f1;
    font-family: Arial, sans-serif;
}

h1 {
    color: #333;
    text-align: center;
}

p {
    color: #666;
    text-align: center;
}
```

In this code, the `index.html` file contains the HTML structure for your custom site, and the `styles.css` file contains the custom CSS styles to modify the appearance of the site elements.

You can modify the HTML content and CSS styles according to your preferences to create a fully customized GitHub Pages site. Remember to commit and push these files to your repository to apply the changes and update your site.

## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/learn-github/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

[![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan&labelColor=%23697689&countColor=%23555555&style=plastic)](https://visitorbadge.io/status?path=https%3A%2F%2Fgithub.com%2Fdrshahizan)
![](https://hit.yhype.me/github/profile?user_id=81284918)
