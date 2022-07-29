 
import pygame as pg
from random import *
pg.init()
pg.display.set_caption("Circle Moving")

pg.mixer.init()
pg.mixer.music.load("bob.mp3")
pg.mixer.music.play(-1)


is_running = True
WIDTH, HEIGHT = 800, 600
FPS = 60
WHITE = (255,255,255)
BLACK = (0, 0 , 0)
RED = (255, 0 , 0)
GREEN = (0, 255 , 0)
BLUE = (0, 0 , 255)
COLOR = RED

font = pg.font.SysFont("Times New Roman", 40, True)

lose = False

backgroung_jpg = pg.image.load("background.jpg")
backgroung_jpg = pg.transform.scale(backgroung_jpg, (WIDTH, HEIGHT))

screen = pg.display.set_mode((WIDTH, HEIGHT))
clock = pg.time.Clock()

x_c, y_c = WIDTH // 2, HEIGHT - 100
dx, dy = 4,-6
r = 30

Color = BLUE

score = 0
while is_running:
    clock.tick(FPS)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            is_running = False
    screen.fill(WHITE)
    screen.blit(backgroung_jpg, (0,0))
    (x_r, y_r) = pg.mouse.get_pos()

    pg.draw.circle(screen, RED, (x_c, y_c), r)
    if x_r <= 200:
        x_r = 200
    if x_r >= 600:
        x_r = 600
    
    if y_c >= HEIGHT:
        lose = True

    if event.type == pg.KEYDOWN and event.key == pg.K_l:
        COLOR = GREEN
        
        keys  = pg.key.get_pressed()
        if keys[pg.K_LEFT]:
            x_r -= 3
        if keys[pg.K_RIGHT]:
            x_r += 3
        if keys[pg.K_DOWN]:
            y_r += 3
        if keys[pg.K_UP]:
            y_r -= 3


    while lose:
        clock.tick(FPS)
        for event in pg.event.get():
            if event.type == pg.QUIT:
                is_running = False
                lose = False
        pg.mixer.music.stop()
        



        pg.draw.rect(screen, WHITE, (WIDTH // 2 - 200, HEIGHT // 2 - 200), 400, 400) 
        text1 = font.render(f"Game over", False, False)
        text2 = font.render(f"Your score is: {score}", False, False)
        
        screen.blit(text1, (WIDTH // 2 - 200, HEIGHT // 2 - 200))
        screen.blit(text2, (WIDTH // 2 - 200, HEIGHT // 2 - 100))
        pg.display.flip()
        
    pg.draw.rect(screen, Color, (x_r - 200,500,400,20))
    
    if x_c + r >= WIDTH or x_c - r <= 0:
        dx *= -1
        score += 1
    if y_c - r <= 0:
        score +=1
        dy *= -1
    x_c += dx
    y_c += dy

    ball_point = (x_c, y_c + r)
    #collision

    if (ball_point[0] in range(x_r - 200, x_r + 201)) and (ball_point[1] == 500):
        dy *= -1

    
    
    
    pg.display.flip()
pg.quit()
