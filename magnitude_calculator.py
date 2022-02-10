# ||v|| = sqrt(Vx^2+Vy^2)

from math import sqrt; from util.sqr import sqr

vx = int(input("vx: "))
vy = int(input("vy: ")) 

def return_magnitude(vx, vy):
    print( round(sqrt(sqr(vx) + sqr(vy))) )
return_magnitude(vx, vy)

