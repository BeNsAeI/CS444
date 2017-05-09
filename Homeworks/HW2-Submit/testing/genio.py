from os import listdir
from os.path import isfile, isdir, join

# Opens a bunch of files to generate IO

for something in listdir('/'):
    something = join('/', something)
    if isdir(something):
        try:
            for thisfile in listdir(something):
                thisfile = join(something, thisfile)
                if isfile(thisfile):
                    with open(thisfile) as f:
                        tmp = f.read()
        except:
            print "Could not open ", something
