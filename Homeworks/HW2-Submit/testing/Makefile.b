all:
	make ios
ios:
	dstat -r --aio --fs
git:
	clear;git log --pretty=format:'%<(20)%h %<(20)%an %<(20)%s %<(20)%ci' -21
