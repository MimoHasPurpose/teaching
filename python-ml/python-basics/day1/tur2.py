from turtle import *
import random 
random.seed(10)
tracer(10, 0)

for i in range(1000):
    goto(random.andint(-400, 400), random.randint(-400, 400))

update()
done()