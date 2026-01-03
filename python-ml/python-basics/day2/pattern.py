from turtle import *
from random import *
speed('fastest')
for i in range(360):
    if i%2==0:
        continue
    forward(i)
    left(89)
done()