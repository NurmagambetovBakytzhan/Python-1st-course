import pygame
import random
pygame.init()

import pygame as pg
pg.init()

WIDTH, HEIGHT = 700, 500
WHITE = (255,255,255)
BLACK = (0,0,0)
RED = (255, 0, 0)
GREEN = (0,255,0)
BLUE = (0,0,255)

x = 180
y = 70
dx = 2
dy = 2

is_running = True
fps = 70
pg.display.set_caption("WELCOME TO THE CLUB, BUDDY")
screen = pg.display.set_mode((WIDTH,HEIGHT))
clock = pg.time.Clock()

while is_running():
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            is_running = False
    screen.fill(BLACK)
    clock.tick(fps)

    x += dx
    y += dy
    
    if x > 520 or x < 0:
        dx *= -1
        color = (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))
    if y > 430 or y < 0:
        dy *= -1
        color = (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))
    pygame.draw.ellipse(screen)
    pygame.display.flip()
