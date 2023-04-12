<a href="https://github.com/drshahizan/learn-github/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/learn-github" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/network/members"><img src="https://img.shields.io/github/forks/drshahizan/learn-github" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/learn-github" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/issues"><img src="https://img.shields.io/github/issues/drshahizan/learn-github" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/learn-github?color=2b9348"></a>
![](https://visitor-badge.glitch.me/badge?page_id=drshahizan/learn-cloud)

Don't forget to hit the :star: if you like this repo.

# Research Colloquium Series 1: Best practices for using the cloud in research

<p align="center">
<img src="https://github.com/drshahizan/learn-github/blob/main/images/Github-EN.jpg"  height="400" />
</p>

You will learn:

✅️ How to set up a cloud environment for research purposes. 

✅️ How to integrate Github (cloud) with Github desktop, as well as Google Colab and Google Drive. 

Please ensure that you already have a Github account. 

### Contents:
- [Book](#book)
- [Github Profile](#github-profile-)
- [Tools](#tools)
- [Articles](#articles-)
- [Tutorials](#tutorials-)
- [Google Colab](#google-colab-)

# 🔗 [Git](./materials/git/git-intro.md)
Git is a distributed version control system designed to track changes in software code over time. It was created in 2005 by Linus Torvalds, the same person who created the Linux operating system. Git is open-source software, meaning that it is free to use and modify, and it is widely used in software development teams.

With Git, developers can work collaboratively on the same codebase, making changes and merging them together seamlessly. Each developer has their own copy of the code repository, which they can modify and then share with others. Git also provides tools for branching and merging code, allowing developers to work on different features or bug fixes without interfering with each other's work.

One of the main benefits of using Git is its ability to track changes and roll back to previous versions if needed. This is particularly useful when bugs are introduced or when a new feature causes unintended consequences. Git also allows developers to review and comment on each other's code changes, making it easier to catch errors and maintain quality control.

Git can be used with a command-line interface, or with a variety of graphical user interfaces (GUIs) that provide a more user-friendly experience. Some popular Git GUIs include GitHub Desktop, Sourcetree, and GitKraken.

Overall, Git is a powerful tool for software developers that facilitates collaboration, version control, and quality control. [**More info...**](./materials/git/git-intro.md)

### Book
- [Pro Git](https://git-scm.com/book/en/v2)
- [Git tutorial](https://git-scm.com/docs/gittutorial)

### More Information About Git
- [Git: Documentation](https://git-scm.com/doc)
- [Mercurial](https://www.mercurial-scm.org)
- [Apache Subversion](https://subversion.apache.org)
- [Wikipedia: Version control](https://en.wikipedia.org/wiki/Version_control)

### [Git Cheatsheet](https://github.com/drshahizan/learn-github/blob/main/git-cheatsheet.md)

### Installing Git
The first step on the way to using Git is to install it! The directions found in the Git documentation below are pretty thorough and helpful, check them out for the best method of getting Git onto your platform of choice.
- [Git download page](https://git-scm.com/downloads)
- [Git installation instructions for each platform](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)

Some useful commands for getting started:

| Command | Explanation & Link |
| ----- | ----- | 
| [git clone URL](https://git-scm.com/docs/git-clone) | Git clone is used to clone a remote repository into a local workspace |
| [git push](https://git-scm.com/docs/git-push) | Git push is used to push commits from your local repo to a remote repo |
| [git pull](https://git-scm.com/docs/git-pull) | Git pull is used to fetch the newest updates from a remote repository |
| [git remote](https://git-scm.com/docs/git-remote) | List remote repos |
| [git remote -v](https://git-scm.com/docs/git-remote#Documentation/git-remote.txt-emshowem) | List remote repos verbosely |
| [git remote show <name>](https://git-scm.com/docs/git-remote#Documentation/git-remote.txt-emshowem) | Describes a single remote repo |
| [git remote update](https://git-scm.com/docs/git-remote#Documentation/git-remote.txt-emupdateem) | Fetches the most up-to-date objects |
| [git fetch](https://git-scm.com/docs/git-fetch) | Downloads specific objects |
| [git checkout](https://git-scm.com/docs/git-checkout)| effectively used to switch branches |
| [git reset](https://git-scm.com/docs/git-reset#_examples)| basically resets the repo, throwing away some changes. It’s somewhat difficult to understand, so reading the examples in the documentation may be a bit more useful|
| [git commit --amend](https://git-scm.com/docs/git-commit#Documentation/git-commit.txt---amend)| is used to make changes to commits after-the-fact, which can be useful for making notes about a given commit.|
| [git revert](https://git-scm.com/docs/git-revert)| makes a new commit which effectively rolls back a previous commit. It’s a bit like an undo command.|
| [git branch](https://git-scm.com/docs/git-branch) | Used to manage branches |
| [git branch -d <name>](https://git-scm.com/docs/git-branch#Documentation/git-branch.txt--D) | Deletes the branch |
| [git branch -D <name>](https://git-scm.com/docs/git-branch#Documentation/git-branch.txt--D) | Forcibly deletes the branch |
| [git branch -r](https://git-scm.com/docs/git-branch#Documentation/git-branch.txt--r) | Lists remote branches; can be combined with other branch arguments to manage remote branches |
| [git checkout <branch>](https://git-scm.com/docs/git-checkout) | Switches to a branch. |
| [git checkout -b <branch>](https://git-scm.com/docs/git-checkout#Documentation/git-checkout.txt--bltnewbranchgt) |Creates a new branch and switches to it. |
| [git merge <branch>](https://git-scm.com/docs/git-merge) | Merge joins branches together. |
| git merge --abort | If there are merge conflicts (meaning files are incompatible), --abort can be used to abort the merge action. |
| [git log --graph --oneline](https://git-scm.com/book/en/v2/Git-Basics-Viewing-the-Commit-History) | This shows a summarized view of the commit history for a repo. |

# Github
<p align="center">
<img src="https://github.com/drshahizan/learn-github/blob/main/images/github.png"  height="400" />
</p>

- [Stuck on Git: Git basic for beginners explained with post it notes](https://www.linkedin.com/posts/brookejamieson_git-learntocode-techbasics-activity-7029577352955219968-i4X1/)

## GitHub Cheat-Sheet
- [Function: Follow, fork and star](./fork-star.md)
- [Github: commit](./github-commit.md)
- [Github: webhosting](https://github.com/drshahizan/learn-github/blob/main/github-webhosting.md)

There are various remote repository hosting sites:

- [GitHub](https://github.com/)
- [BitBucket](https://bitbucket.org/product)
- [Gitlab](https://about.gitlab.com/)

Follow the workflow at [https://github.com/join](https://github.com/join) to set up a free account, username, and password. After that, [these steps](https://docs.github.com/en/get-started/quickstart/create-a-repo) will help you create a brand new repository on GitHub.

  
This can be useful for keeping your local workspace up to date.
- [https://help.github.com/en/articles/caching-your-github-password-in-git](https://help.github.com/en/articles/caching-your-github-password-in-git)
- [https://help.github.com/en/articles/generating-an-ssh-key](https://help.github.com/en/articles/generating-an-ssh-key)
  
Merge conflicts are not uncommon when working in a team of developers, or on Open Source Software. Fortunately, GitHub has some good documentation on how to handle them when they happen:

- [https://help.github.com/en/articles/about-pull-request-merges](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/incorporating-changes-from-a-pull-request/about-pull-request-merges)
- [https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/about-merge-conflicts](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/about-merge-conflicts)
- [https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/resolving-a-merge-conflict-using-the-command-line](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/resolving-a-merge-conflict-using-the-command-line)
  
You can also use [git rebase branchname](https://git-scm.com/book/en/v2/Git-Branching-Rebasing) to change the base of the current branch to be branchname

The git rebase command is a lot more powerful. Check out [this link](https://git-scm.com/book/en/v2/Git-Tools-Rewriting-History) for more information.

## Github Profile 👋
1. [How to create a GitHub Profile README: Michelle Mannering](https://dev.to/github/how-to-create-a-github-profile-readme-jha)
2. [mishmanners](https://github.com/mishmanners)
3. [How To Create A GitHub Profile README: Monica Powell](https://dev.to/m0nica/how-to-create-a-github-profile-readme-1paj)
4. [m0nica](https://github.com/m0nica)
5. [katiehuangx](https://github.com/katiehuangx)
6. [sharkawy98](https://github.com/sharkawy98)

## Tools✨
- [StackEdit](https://stackedit.io/app#)
- [Dillinger](https://dillinger.io/)
- [Git and GitHub learning resources](https://docs.github.com/en/get-started/quickstart/git-and-github-learning-resources)
- [GitHub Skills](https://skills.github.com/)
- [Basic writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
- [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)
- [Awesome README Tools](https://github.com/dhyeythumar/awesome-readme-tools)
- [Todoist Stats in Readme](https://github.com/abhisheknaiidu/todoist-readme) - Daily Todoist Stats on your Profile Readme
- [Visitor Badge](https://visitor-badge.glitch.me/#docs) - Count visitors for your README.md, Issues, PRs in GitHub
- [Shields Project](https://shields.io/) - Use Shields to create profile badges, compatible with Simple Icons
- [Github Readme Stats](https://github.com/anuraghazra/github-readme-stats) - Get dynamically generated GitHub stats on your readmes
- [Github Contributor Stats](https://github.com/HwangTaehyun/github-contributor-stats) - :fire: Get dynamically generated Github Contributor stats (repositories you really committed) on your readmes
- [GitHub Streak Stats](https://github.com/DenverCoder1/github-readme-streak-stats) - 🔥 Stay motivated and show off your contribution streak! 🌟 Display your total contributions, current streak, and longest streak on your GitHub profile README
- [Simple Icons](https://github.com/simple-icons/simple-icons#cdn-usage) -  SVG icons for popular brands for your README.md files
- [Laravel GitHub Profile Visit Counter](https://github.com/caneco/laravel-github-profile-view-counter) - Add on your Laravel project a quick-badge to count your profile visits.
- [Dev Metrics in Readme](https://github.com/athul/waka-readme) - [WakaTime](https://wakatime.com/) Weekly Metrics on your Profile Readme
- [Profile Activity Generator](https://github.com/omidnikrah/profile-activity-generator) - Generate custom profile activity for your profile README
- [Current UTC time](https://github.com/jojoee/jojoee) - Example code of server that can serve dynamic content on GitHub profile
- [Github Activity in README](https://github.com/jamesgeorge007/github-activity-readme) - Updates `README.md` with the recent GitHub activity of a user
- [Github Profile README Generator](https://github.com/rahuldkjain/github-profile-readme-generator) - This tool provides an easy way to create github profile readme with latest addons like `visitors count`, `github stats` etc.
- [Dynamic Profile Page On Github](https://github.com/umutphp/github-action-dynamic-profile-page) - Get dynamically generated list of your commits (of the repositories that the action is configured) on GitHub profile readme.
- [npm package downloads](https://github.com/maddhruv/github-readme-npm-downloads) - Show all of your npm packages and their total downloads
- [All Dev Stats in Readme](https://github.com/anmol098/waka-readme-stats) - Are you an early 🐤 or a night 🦉? When are you most productive during the day? What languages you code in? And other stuff... Let's check out in your readme!
- [Feedparser](https://pythonhosted.org/feedparser/) - Convenient processing of RSS files
- [Profile README Widgets](https://github.com/marketplace/actions/profile-readme) - Add simple widgets to your profile readme.
- [Spotify now playing card generator](https://github.com/kittinan/spotify-github-profile) - Generate your Spotify now playing card for your GitHub profile
- [Markdown Badges](https://github.com/Ileriayo/markdown-badges) - Add badges to your profile.
- [Latest Blog Posts and StackOverflow activity in readme](https://github.com/gautamkrishnar/blog-post-workflow) - Show your latest blog posts from any sources or StackOverflow activity on your GitHub profile/project readme automatically using the RSS feed using this Github Action
- [GitHub Readme LinkedIn](https://github.com/soroushchehresa/github-readme-linkedin) - Get dynamically generated images from your LinkedIn profile on your GitHub readmes
- [GitHub Readme Medium](https://github.com/omidnikrah/github-readme-medium) - Show your latest Medium article on your readmes!
- [GitHub Readme StackOverflow](https://github.com/omidnikrah/github-readme-stackoverflow) - Dynamically generated your StackOverflow profile status on your GitHub readmes!
- [StackOverflow Stats Badge](https://github.com/claytonjhamilton/stackoverflow-badge) - Display your stats with this Unique StackOverflow Badge!
- [Github Profile README Generator](https://github.com/arturssmirnovs/github-profile-readme-generator) - This project allows you to create nice and simple github profile readme files.
- [Profile Readme Stats](https://github.com/marketplace/actions/profile-readme-stats) - [Github Action] Showcase your github stats on your profile README.md
- [README Jokes](https://github.com/ABSphreak/readme-jokes) - Random dev jokes in your GitHub README.
- [GitHub Profile Trophy](https://github.com/ryo-ma/github-profile-trophy) - 🏆 Add dynamically generated GitHub Trophy on your readme
- [Github Readme Twitter](https://github.com/gazf/github-readme-twitter) - Show your latest tweet on your readmes.
- [Random Dev Memes](https://github.com/techytushar/random-memer) - Random dev memes to display on your GitHub README.
- [GitHub Readme Quotes](https://github.com/PiyushSuthar/github-readme-quotes) - Dev quotes on your GitHub Profile Readme.
- [GitHub Profilinator](https://github.com/rishavanand/github-profilinator) - This tool contains small GUI components that you can hook together to generate markdown for your perfect readme.
- [PageSpeed score](https://github.com/ankurparihar/readme-pagespeed-insights) - Generate website's PageSpeed score in animated svg form which can be used in GitHub README
- [Gitwar Profile Score](https://github.com/iampavangandhi/Gitwar) - Add your Github Profile Score in README.
- [Header Images for Github Profile READMEs](https://github.com/khalby786/REHeader) - Generate header images for your GitHub profile READMEs with custom content
- [YouTube Channel Stats](https://github.com/DenverCoder1/github-readme-youtube-stats) - 📺 Display number of subscribers on YouTube and/or your channel's view count as a badge
- [Current Book Status from GoodReads](https://github.com/theFr1nge/goodreads-readme) - Add a card of the current book you are reading that automatically syncs with GoodReads to display your progress.
- [Readme Typing SVG](https://github.com/DenverCoder1/readme-typing-svg) - :zap: Dynamically generated, customizable SVG that gives the appearance of typing and deleting text

## Articles 📖
- [Git and GitHub learning resources](https://docs.github.com/en/get-started/quickstart/git-and-github-learning-resources)
- [GitHub Skills](https://skills.github.com/)
- [An Intro to Git and GitHub for Beginners (Tutorial)](https://product.hubspot.com/blog/git-and-github-tutorial-for-beginners)
- [Coursera: Introduction to Git and GitHub](https://www.coursera.org/learn/introduction-git-github?action=enroll)
- [Microsoft Learning: Github](https://learn.microsoft.com/en-us/training/github/)
- ["How To Create A GitHub Profile README"](https://www.aboutmonica.com/blog/how-to-create-a-github-profile-readme) - *Monica Powell*
- ["How to Stand Out on Github with Profile READMEs"](https://medium.com/better-programming/how-to-stand-out-on-github-with-profile-readmes-dfd2102a3490?source=friends_link&sk=61df9c4b63b329ad95528b8d7c00061f) - *Jessica Lim*
- ["What's on your GitHub Profile"](https://dev.to/waylonwalker/what-s-on-your-github-profile-40p3) - *Waylon Walker*
- ["3 Ways to Spice up your Github Profile README 🔥"](https://dev.to/jayehernandez/3-ways-to-spice-up-your-github-profile-readme-1276) - *Jaye Hernandez*
- ["Dynamically Generated Github Stats For Your Profile ReadMe"](https://dev.to/anuraghazra/dynamically-generated-github-stats-for-your-profile-readme-o4g) - *Anurag Hazra*
- ["How to create an awesome GIF for your GitHub Profile README"](https://dev.to/satvikchachra/how-to-add-an-awesome-readme-to-your-github-profile-361n) - *Satvik Chachra*
- ["Create a special repository in your GitHub Profile 🔨, supported and unsupported features"](https://torrocus.com/blog/special-github-repository/) - *Alex Malaszkiewicz*
- ["How to create a Github Profile README with Dynamic Github Stats"](https://codewithghazi.com/how-to-create-a-github-profile-readme-with-dynamic-github-stats/) - *Ghazi Khan*
- ["How I Built A Self-Updating README On My Github Profile"](https://www.mokkapps.de/blog/how-i-built-a-self-updating-readme-on-my-git-hub-profile/) - *Michael Hoffmann (Mokkapps)*
- ["Building a self-updating profile README for GitHub"](https://simonwillison.net/2020/Jul/10/self-updating-profile-readme/) - *Simon Willison*
- ["How to create an interactive README for your GitHub profile"](https://kavishhukmani.me/github-profile-interactive-readme-tutorial/) - *Kavish Hukmani*
- ["什么？Github 居然可以这么玩？"](https://zhuanlan.zhihu.com/p/161705999) - *Tw93*
- ["Getting started with Markdown Badges"](https://dev.to/ileriayo/mardown-badges-2og0) - *Ileriayo Adebiyi*
- ["Show your latest dev.to posts automatically on your GitHub profile readme"](https://dev.to/gautamkrishnar/show-your-latest-dev-to-posts-automatically-in-your-github-profile-readme-3nk8)  - *Gautam krishna R*
- ["How I Built A Self-Updating README by Webhooks and Netlify Functions"](https://github.com/RaoHai/RaoHai/blob/master/How-I-Built-A-Self-Updating-README-by-Webhooks-and-Netlify-Functions.md/) - *Rao Hai*
- ["Build a Stunning README For Your GitHub Profile"](https://towardsdatascience.com/build-a-stunning-readme-for-your-github-profile-9b80434fe5d7) - *Martin Heinz*
- ["How I added my Spotify statistics to my GitHub readme 📜"](https://dev.to/gargakshit/how-i-added-my-spotify-statistics-to-my-github-readme-4jdd) - *Akshit Garg*
- ["Static Readme Regeneration"](https://dev.to/aralroca/static-readme-regeneration-4pf2) - *Aral Roca*
- ["How to Create a Self-Updating README.md for Your GitHub Profile"](https://medium.com/@th.guibert/how-to-create-a-self-updating-readme-md-for-your-github-profile-f8b05744ca91) - *Thomas Guibert*
- ["一文玩转github主页"](https://blog.holic-x.com/wv-blog/post/7ad96a5d.html) - *holic-x*

## Tutorials 🎥
- [Git, GitHub, & GitHub Desktop for beginners](https://youtu.be/8Dd7KRpKeaE)
- [What is GitHub?](https://youtu.be/pBy1zgt0XPc)
- [How to Use GitHub](https://youtu.be/v_1iqtOnUMg)
- [GitHub Tutorial - Beginner's Training Guide](https://youtu.be/iv8rSLsi1xo)
- ["Create Impressive GitHub Portfolio"](https://www.youtube.com/watch?v=dkE4mVhwMB4) - *MTECHVIRAL*
- ["How To Create a Github Profile ReadMe"](https://www.youtube.com/watch?v=DOiGs2NiDbU) - *James Q Quick*
- ["How to create a GitHub profile README"](https://www.youtube.com/watch?v=vND_UY7xk24) - *Code With Confidence*
- ["How To Create A GitHub Profile README"](https://www.youtube.com/watch?v=Y1z7_GfEPiE) - *Program With Erik*
- ["Next Level GitHub Profile README"](https://youtu.be/ECuqb5Tv9qI) - *codeSTACKr*
- [Git Explained in 100 Seconds](https://youtu.be/hwP7WQkmECE)
- [GitHub Pull Request in 100 Seconds](https://youtu.be/8lGpZkjnkt4)
- [Git It? How to use Git and Github](https://youtu.be/HkdAHXoRtos)
- [13 Advanced (but useful) Git Techniques and Shortcuts](https://youtu.be/ecK3EnyGD8o)

one of the best, 21st century, coding, YouTube channels

## Github Pages
- [Learn GitHub Pages](./materials/pages.md)
- [GitHub Pages](https://pages.github.com/)
- [Youtube - Getting Started with GitHub Pages](https://youtu.be/QyFcl_Fba-k)
- [Youtube - Github Pages: Web Hosting Gratis dengan GitHub Pages](https://youtu.be/rgDDWhQe-ow)
- [GitHub Pages examples](https://github.com/collections/github-pages-examples)

## Google Colab✍️
1. [Welcome To Colaboratory](https://colab.research.google.com/#scrollTo=Nma_JWh-W-IF)
2. [Google Colab — The Beginner’s Guide](https://medium.com/lean-in-women-in-tech-india/google-colab-the-beginners-guide-5ad3b417dfa)
3. [Introduction to Colab and Python](https://colab.research.google.com/github/tensorflow/examples/blob/master/courses/udacity_intro_to_tensorflow_for_deep_learning/l01c01_introduction_to_colab_and_python.ipynb#scrollTo=YHI3vyhv5p85)

## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/learn-github/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

![](https://visitor-badge.glitch.me/badge?page_id=drshahizan)
