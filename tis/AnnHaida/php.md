<a href="https://github.com/drshahizan/software-engineering/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/software-engineering" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/software-engineering/network/members"><img src="https://img.shields.io/github/forks/drshahizan/software-engineering" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/software-engineering/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/software-engineering" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/software-engineering/issues"><img src="https://img.shields.io/github/issues/drshahizan/software-engineering" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/software-engineering/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/software-engineering?color=2b9348"></a>
![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan%2Fsoftware-engineering&labelColor=%23d9e3f0&countColor=%23697689&style=flat)


Don't forget to hit the :star: if you like this repo.

# Project 4: Final Project using PHP

## Project Theme
The theme for your project is web responsiveness with a focus on Malaysian culture. This means that your group will develop a functional data-centric online system that is both responsive and able to adapt to different devices and screen sizes, as well as incorporate elements of Malaysian culture.

To achieve this theme, your group may incorporate various design elements such as colors, graphics, and images that represent Malaysian culture. These elements can be used to create a unique and visually appealing website that showcases the beauty and diversity of Malaysian culture.

Furthermore, your group may also consider incorporating responsive design techniques such as fluid grids, flexible images, and media queries to ensure that the website is optimized for viewing on different devices, including desktops, laptops, tablets, and smartphones.

By combining web responsiveness and Malaysian culture, your group can create an innovative and engaging online system that reflects the values and traditions of Malaysia while also providing a seamless user experience across different devices.

## Example: A responsive website about Malaysian culture

### Homepage
- The homepage features a banner image of a cultural landmark or festival in Malaysia, such as the Petronas Twin Towers or the Thaipusam Festival.
- The homepage also includes a navigation menu that is optimized for both desktop and mobile devices, allowing users to easily access different sections of the website.
- The homepage could also feature a "Featured Article" section, highlighting a piece of Malaysian culture, such as a traditional dish or a local legend.

### Culture Section
- The Culture section could include articles on various aspects of Malaysian culture, such as food, clothing, music, and dance.
- Each article would feature images and descriptions of different cultural practices, as well as embedded videos that showcase traditional performances and festivals.
- The Culture section would also be optimized for both desktop and mobile devices, with a responsive design that ensures a seamless user experience.

### Events Section
- The Events section could highlight upcoming cultural events and festivals in Malaysia, such as the Hari Raya Aidilfitri or the Georgetown Festival.
- The section would include a calendar view that is optimized for both desktop and mobile devices, allowing users to easily browse and filter through different events.
- Each event listing would include details on the location, time, and description of the event, as well as images and videos from past iterations of the festival.

Overall, the website would be optimized for both desktop and mobile devices, with a responsive design that ensures a seamless user experience. It would showcase the diversity and beauty of Malaysian culture through rich multimedia content, while also providing users with up-to-date information on cultural events and practices in the country.

## Project Description

For the final project, your group will develop a functional data-centric online system using PHP. The minimum requirements for the implemented system are as follows:

1. The developed system must be functional and operated online.
2. The developed system must be data-centric and connected to a database.
3. The developed system must be implemented using the programming languages taught in this class, including HTML, CSS, JavaScript, PHP, and MySQL.
4. The system should not be developed through any open-source-based systems.
5. The database must consist of at least five tables.
6. The developed system must incorporate the following capabilities:
   - Data Manipulation capabilities
   - Sorting and Searching capabilities
   - User Verification capabilities
   - Varied User Access/Level capabilities
7. You may also incorporate:
   - Cookie
   - Any added functions, such as input validation using JavaScript (highlight during presentation)
   - A clean, consistent, and attractive presentation using HTML and CSS.

## Codebase structure
An example of what the codebase structure for a Malaysian culture system could look like, including the different folders and files that would be included:

1. HTML/CSS:
- `index.html`: This is the main homepage of the website, which would include links to other pages, images, and descriptions of different cultural practices or events.
- `style.css`: This file would handle the styling and layout of different elements on the website, such as fonts, colors, and margins.

2. JavaScript:
- `script.js`: This file would include JavaScript code for adding interactivity and dynamic features to the website, such as dropdown menus, image sliders, and modal windows.

3. PHP:
- `config.php`: This file would contain the configuration settings for connecting to the MySQL database.
- `db_functions.php`: This file would include PHP functions for retrieving data from the database, generating dynamic web pages, and handling user authentication and authorization.

4. MySQL:
- `database.sql`: This file would contain the SQL code for creating the database tables and defining the relationships between them.

5. Reporting:
- `report.php`: This file would include PHP code for generating reports and visualizations based on data extracted from the MySQL database.

Overall, the codebase for a Malaysian culture system would be organized into different folders based on the type of content or functionality, such as HTML/CSS, JavaScript, PHP, MySQL, and reporting. The file structure would be designed to be easily navigable and intuitive for developers working on the project, with clear naming conventions and comments to explain the purpose of each file. By using this structure, the codebase would be modular, scalable, and maintainable over time, allowing the system to be updated or enhanced as needed to meet the evolving needs of users.

## Folder Structure
You must place your file in the submission folder. Within the [`submission`](./submission) folder, create a folder called your `group_id`. Name the default file as `index.php`. Suggested folder structure for this project:

A folder structure for a Malaysian culture system with CSS, JS, HTML, database, PHP, and reporting:

```
📁group_id
├── 📄index.php
├── 📁css
│   ├── 📄bootstrap.min.css
│   └── 📄style.css
├── 📁js
│   ├── 📄jquery.min.js
│   └── 📄bootstrap.min.js
├── 📁includes
│   ├── 📄config.php
│   ├── 📄functions.php
│   └── 📄header.php
├── 📁images
│   ├── 📄banner.jpg
│   └── 📄logo.png
├── 📁pages
│   ├── 📄about.php
│   ├── 📄events.php
│   ├── 📄gallery.php
│   ├── 📄news.php
│   ├── 📄profile.php
│   └── 📄search.php
├── 📁reporting
│   ├── 📄daily-report.php
│   ├── 📄monthly-report.php
│   └── 📄yearly-report.php
└── 📁database
    ├── 📄db_config.php
    ├── 📄db_create.php
    ├── 📄db_seed.php
    └── 📄db_connection.php
```

In this structure, `index.php` serves as the main landing page that includes the necessary header and footer from the `includes/` folder. The `css/` and `js/` folders contain the necessary stylesheets and scripts for the website. The `images/` folder contains all the necessary images such as logos, banners, and photos. The `pages/` folder contains all the different pages of the website such as the about, events, gallery, news, profile, and search pages. The `reporting/` folder contains all the different reporting pages such as the daily, monthly, and yearly reports. Lastly, the `database/` folder contains all the necessary files for setting up and connecting to the database such as the database configuration, creation, seeding, and connection files.

## Submission

| No | Tools |  File |
| :-----: |  ------ | :-----: | 
| 1 | Greenhorn |  <a href="submission/1%20GREENHORN" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 2 | Boundless |  <a href="submission/2%20Boundless" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 3 | Topgunners |  <a href="submission/3%20TOPGUNNERS" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 4 | FooBar |  <a href="submission/4%20FooBar" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 5 | CEO |  <a href="submission/5%20CEO" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 6 | MaverickCoder |  <a href="submission/6%20MaverickCoder" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 
| 7 | Zskoda |  <a href="submission/7%20zskoda" ><img src="../../images/answer.png" width="24px" height="24px" ></a> | 


## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/software-engineering/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

[![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fdrshahizan&labelColor=%23697689&countColor=%23555555&style=plastic)](https://visitorbadge.io/status?path=https%3A%2F%2Fgithub.com%2Fdrshahizan)
![](https://hit.yhype.me/github/profile?user_id=81284918)

