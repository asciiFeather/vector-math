# Get standard distance.
# tan^-1(Vy/Vx)

import math

vx = int(input("vx: "))
vy = int(input("vy: ")) 

def sqr(x1):
    return x1*x1

def return_magnitude(vx, vy):
    print( round(math.degrees(math.atan(vy/vx))) )
return_magnitude(vx, vy)

