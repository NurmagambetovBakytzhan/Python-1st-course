import pygame as pg
from random import *
pg.init()
pg.display.set_caption("Circle Moving")

# pg.mixer.init()
# pg.mixer.music.load("bob.mp3")
# pg.mixer.music.play(-1)

# backgroung_jpg = pg.image.load("background.jpg")
# backgroung_jpg = pg.transform.scale(backgroung_jpg, (WIDTH, HEIGHT))

is_running = True
WIDTH, HEIGHT = 800, 600
FPS = 60
WHITE = (255,255,255)
BLACK = (0, 0 , 0)
RED = (255, 0 , 0)
GREEN = (0, 255 , 0)
BLUE = (0, 0 , 255)
COLOR = RED

# font = pg.font.SysFont("Times New Roman", 40, True)

lose = False


screen = pg.display.set_mode((WIDTH, HEIGHT))
clock = pg.time.Clock()

x_c, y_c = WIDTH // 2, HEIGHT - 100
dx, dy = 1, 1
r = 30

Color = BLUE

x_r1 = 50
y_r1 = HEIGHT // 2 - 100

x_r2 = 750
y_r2 = HEIGHT // 2 - 100

score = 0
while is_running:
    clock.tick(FPS)
    screen.fill(BLACK)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            is_running = False

    
    pg.draw.circle(screen, GREEN, (x_c, y_c), r)
    pg.draw.rect(screen, BLUE, (x_r1, y_r1, 10, 200))
    pg.draw.rect(screen, RED,(x_r2, y_r2, 10, 200 ))

    if y_c == 0 or y_c == HEIGHT - r:
        dy *= -1

    y_x == 
    
    x_c += dx
    y_c += dy
    
    ball_point = (x_c, y_c + r)
    
    pg.display.flip()
pg.quit()
