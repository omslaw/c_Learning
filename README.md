c_Learning
==========

This is where my code from the cs106b Stanford class will reside. 

The book being used is call Programming Abstractions. I'm currently following the 2014 Spring course and the materials and projects will be from there. 

That is why I have to use QT Creator. Here are the instructions I used to push changes. 

Basically just ignore that git stuff in QT Creator. Only thing I could do is just do commits from it. I can either run the Git GUI and just sync the repos there or use the command line. 

To do it from the Git Shell. (https://help.github.com/articles/create-a-repo)

-git add XXXXX  ( to add the filenames)

-git commit -m 'XXXXX'  (from the above link)

-git commit -a -m 'XXXX' (how i do it from work, not sure of the diff)

-git push  or git push origin master. Both seemed to work for me. 


To clone a repo down to my machine:
-git clone XXXXXXX 
 

To pull new changes from repo to local machine, here is what manual says to do:

-git remote add upstream https://github.com/octocat/Spoon-Knife.git

-----Assigns the original repository to a remote called 'upstream"

-git fetch upstream
-----Pulls in changes not present in your local repository, without modifying your files

But that didn't seem to work for me, I did a git status and noticed it said hey, 
you are behind, use git pull to pull new changes. That worked so use:

-git pull


