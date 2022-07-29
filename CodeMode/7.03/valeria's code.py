from re import T
import pygame as pg
pg.init() #инициализация основных функций пайгейма
WIDTH, HEIGHT = 800, 600
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
GREEN = (0, 255, 0)
ORANGE = (255, 125, 37)


is_running = True
pg.display.set_caption('MY FIRST GAME2') #дает название окошку
screen  = pg.display.set_mode((WIDTH, HEIGHT))
clock = pg.time.Clock()

x = 30
y = 160

dx = 2
dy = 2
fps = 60
rotation = 0

while is_running:
    clock.tick(fps)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            is_running = False
    screen.fill((WHITE))

    font = pg.font.SysFont('Times New Roman', 30 , True, False)
    text = font.render('YOU ARE GAY', False, BLACK)
    text = pg.transform.rotate(text, rotation)
    rotation += 1
    screen.blit(text, (x, y))

    x += dx
    y += dy
    if x == WIDTH-100 or x == 0:
        dx *= (-1)
    if y == HEIGHT-100 or y == 0:
        dy *= (-1)

    pg.display.flip()

pg.quit()



