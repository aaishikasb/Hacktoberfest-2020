# Hacktoberfest 2020

![Author](https://img.shields.io/badge/author-aaishikasb-orange)
![Issues](https://img.shields.io/github/issues/aaishikasb/Hacktoberfest-2020)
![License](https://img.shields.io/github/license/aaishikasb/Hacktoberfest-2020)
![Stars](https://img.shields.io/github/stars/aaishikasb/Hacktoberfest-2020)
![Forks](https://img.shields.io/github/forks/aaishikasb/Hacktoberfest-2020)
![Last Commit](https://img.shields.io/github/last-commit/aaishikasb/Hacktoberfest-2020)
![Maintained](https://img.shields.io/maintenance/yes/2020)
![Size](https://img.shields.io/github/repo-size/aaishikasb/Hacktoberfest-2020)

![Banner](https://embed-fastly.wistia.com/deliveries/49bd387c40e2c5aada92abdf973bc46d.webp?image_crop_resized=960x540)

## How to Participate in Hacktoberfest 2020?

### Register yourself.

Register yourself [here](https://hacktoberfest.digitalocean.com/) to be eligible to participate in Hacktoberfest. You need to have a GitHub Account to do that.

### [Additional] Star and Fork this Repository.

It is pretty easy to do the aforementioned, hover over to the top right corner of this repository to find the buttons to Star and Fork this repository.

![Banner2](https://hacktoberfest.digitalocean.com/assets/HF-full-logo-b05d5eb32b3f3ecc9b2240526104cf4da3187b8b61963dd9042fdc2536e4a76c.svg)

## How to Contribute and Create a PR on this Repository?

### 1. Fork this repository

Click the fork button on the upper right hand corner to make a copy of it to your local GitHub account, where you can make changes.

### 2. Clone this repository.

You need to clone this repository to your local machine where you can edit it.  Copy the following command and paste it in your terminal.

```bash
> git clone https://github.com/username/Hacktoberfest-2020.git
```

Please ensure that you add YOUR username in the command and do this after Forking the Repository.

### 3. Create a New Branch

After successfully cloning the repository, you need to now create a separate branch for yourself to not disturb the workflow of the repository. If you aren't already inside the main folder copy this command in terminal and press enter.

```bash
> cd Hacktoberfest-2020
```

Now that you are inside the main folder, use this command to create a new branch for yourself.

```bash
> git branch (name of your branch)
```

Please ensure that the name of your branch is your username.

### 4. Switch to your New Branch

To start working and to push code from your own branch, please execute the following command in the Terminal.

```bash
> git checkout (name of your branch)
```

You should receive a notification which will state that you have switched to your newly created branch.

### 5. ADD YOUR FAVORITE PIECE OF CODE WHICH CAN HELP BUDDING DEVELOPERS GROW!

Created a calculator in JavaScript? Made a very normal alert app in Kotlin? Push it in your branch! Anything that you think will help budding developers, you can add it here. While doing so, don't forget to add your name to the list of contributors that you will find below.
While you are at it, ensure that you add something useful and not just add your name to the list of contributors. If you push an empty commit, your pull request will be marked as Invalid/Spam.

### 6. Sync all Updates

The part you have been waiting for. If you are sure that you are following the guidelines that you can find [here](https://hacktoberfest.digitalocean.com/details), proceed further and execute the following command in your terminal.

```bash
> git add .
```

This will add all the files in your local repository. After this execute

```bash
> git commit -m "ADD YOUR MESSAGE HERE (PREFERABLY THE NAME OF YOUR PROJECT)"
```

Note that it is mandatory for you to add a Commit Message for others to understand what you are trying to add here. Now finally to push updates to the new branch, execute the following:

```bash
git push --set-upstream origin (name of your branch)
```

While you are at it, also execute the following command which will specify a new remote upstream repository (the one you are looking at).

```bash
> git remote add upstream https://github.com/aaishikasb/Hacktoberfest-2020.git
```

### 7. Keep your Repository in Sync

You need to use the following commands to help you sync all the branches with their respective commits associated with this repository and stay in loop. Copy these commands and execute:

```bash 
> git fetch upstream
```

```bash 
> git checkout master
```

Post this you simply need to merge all the changes you made.

```bash 
> git merge upstream/master
```

7. Create a Pull Request (The Part you have been waiting for)
   Now that you are done with the most complex parts of the process, you can just go to your forked repository and Click on **New Pull Request** towards the left hand side of the page and You're Done!
   Congratulations on successfully creating a Pull Request there!

## What are the most important Git Commands that I am going to need?

Some important commands that you are going to need are listed below:

```bash
> git checkout "name of your branch"
> git checkout dev
> git pull # Really !Important to merge updates
> git rebase dev
```

**The most important commands now are as below:**
```bash
> git add .` or `git add -A
> git commit -m "MESSAGE"
> git push origin "name of your branch"
```

## Guidelines

### (Insert a Joe Biden Meme)

![Joe](https://i.imgflip.com/3w2ckr.jpg)

**I am once again asking you to go through the Guidelines [here](https://hacktoberfest.digitalocean.com/details).**

## Contributors

Please add your name in the list in the following format:

```bash
- Name - [File Name](File Address)
```

- [Aaishika S Bhattacharya](https://www.github.com/aaishikasb) - [README](README.md)
- [Rahul N Panchal](https://www.github.com/iamrahulpanchal) - [README](README.md)
- [Sulthan Mohaideen N K](https://github.com/SulthanNK) - [Gradient-Background-Generator](https://github.com/SulthanNK/Hacktoberfest-2020/tree/master/Gradient-Background-Generator)
- [EeshanDutta007](https://www.github.com/EeshanDutta007) - [README](README.md)
- [Shubhika Shubhavee](https://www.github.com/shubhavee) - [README](README.md)
- [Abner Souza](https://github.com/abnersouza) - [README](README.md)


Please do not spam the repository with unnecessary Pull Requests. Happy Hacking!
