// echo "# Trello" >> README.md
// git init
// git add README.md
// git commit -m "Dashboard of home page"
// git branch -M main
// git remote add origin https://github.com/deepak9236/Trello.git
// git push -u origin main


// Push code On new Repo:-
git init
git remote add origin <paste_the_repository_url>
git add .
git status
git commit -m "Your commit message"
git push -u origin main


// For Different Branch(create and push):- 
Check Branch:- git branch
Create Branch:- git checkout -b <branch_name>
git add .
git commit -m "Your commit message here"
git push -u origin branch_name

// For delete Branch:-(first switch then delete)
Switch:- git checkout <branch_name>
git branch -d branch_name

check:- git remote
check remote:- git remote -v
change remote:- git remote set-url origin https://github.com/username/new-repository.git


// If node_modules is push but we mention in git_ignore:-
git rm -r --cached node_modules
Make sure "node_modules/" present in .gitignore file
git commit -m "Remove node_modules from version control"
git push origin <branch-name>


delete any spacific commit
delete last commit
rename commit name of any commit
delete Branch
rename branch name