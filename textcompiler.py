import os
p="assignment/"
pathlist = sorted(os.listdir(p), key = lambda x: int("".join([i for i in x if i.isdigit()])))
j=1
name="Vakesan M"
regno="18GAEM9089"
intro=name+"\n"+regno

with open('concatfile.txt','a') as outfile:
    outfile.write(intro)
    for path in pathlist:
        with open(p+path,'r') as infile:
            k="\n\n\nquestion "+str(j)+"\n\n"
            outfile.write(k)
            j=j+1
            outfile.write(infile.read())
            print(path)
