# Get Vx and Vy
initial_x = int(input("xi: "))
initial_y = int(input("yi: "))

terminal_x = int(input("xt: "))
terminal_y = int(input("yt: "))

initial  = (int(initial_x), int(initial_y))
terminal = (int(terminal_x), int(terminal_y))

def calculate():
	print(f"V = ({terminal[0]-initial[0]}, {terminal[1]-initial[1]})")

if __name__ == '__main__':
	calculate()
