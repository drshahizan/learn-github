<a href="https://github.com/drshahizan/learn-github/stargazers"><img src="https://img.shields.io/github/stars/drshahizan/learn-github" alt="Stars Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/network/members"><img src="https://img.shields.io/github/forks/drshahizan/learn-github" alt="Forks Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/pulls"><img src="https://img.shields.io/github/issues-pr/drshahizan/learn-github" alt="Pull Requests Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/issues"><img src="https://img.shields.io/github/issues/drshahizan/learn-github" alt="Issues Badge"/></a>
<a href="https://github.com/drshahizan/learn-github/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/drshahizan/learn-github?color=2b9348"></a>
![](https://visitor-badge.glitch.me/badge?page_id=drshahizan/learn-cloud)

Don't forget to hit the :star: if you like this repo.

# Git

### Book

[**Pro Git**](https://git-scm.com/book/en/v2) is a book written by Scott Chacon and Ben Straub that serves as a comprehensive guide to Git. It covers everything from basic concepts and terminology to advanced features and workflows. The book is available online for free under a Creative Commons license, and is also available in print.

The first few chapters of "Pro Git" provide an introduction to Git and cover the basics of setting up a repository, making changes, and committing those changes. The book then delves into more advanced topics such as branching and merging, rebasing, and resolving conflicts. It also covers best practices for working with Git in a team environment, including code review, continuous integration, and release management.

"Pro Git" also covers several third-party tools and services that integrate with Git, including GitHub, GitLab, and Bitbucket. The book provides detailed instructions on how to set up and use these tools for collaboration and project management.

In addition to "Pro Git," there are many online Git tutorials available that provide step-by-step instructions for getting started with Git. Some popular Git tutorials include:

1. **[Git - The Simple Guide](https://rogerdudler.github.io/git-guide/)** by Roger Dudler: This tutorial provides a brief overview of Git and covers the basic commands needed to get started.

2. **[Learn Git Branching](https://learngitbranching.js.org/)** by Peter Cottle: This interactive tutorial uses a visual interface to teach users how to work with Git branches and merges.

3. **Getting Started with Git** by Atlassian: This tutorial provides a comprehensive introduction to Git, including basic concepts, common workflows, and best practices.

4. "Git Tutorial" by Codecademy: This tutorial provides a hands-on approach to learning Git through interactive exercises.

5. [**Git tutorial** by git-scm.com/](https://git-scm.com/docs/gittutorial)

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

## Tutorials 🎥
- [Git, GitHub, & GitHub Desktop for beginners](https://youtu.be/8Dd7KRpKeaE)
- [Git Explained in 100 Seconds](https://youtu.be/hwP7WQkmECE)
- [Git It? How to use Git and Github](https://youtu.be/HkdAHXoRtos)
- [13 Advanced (but useful) Git Techniques and Shortcuts](https://youtu.be/ecK3EnyGD8o)

## Contribution 🛠️
Please create an [Issue](https://github.com/drshahizan/learn-github/issues) for any improvements, suggestions or errors in the content.

You can also contact me using [Linkedin](https://www.linkedin.com/in/drshahizan/) for any other queries or feedback.

![](https://visitor-badge.glitch.me/badge?page_id=drshahizan)

