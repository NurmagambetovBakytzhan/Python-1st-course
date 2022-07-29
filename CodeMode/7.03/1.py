import pygame as pg
pg.init()

WIDTH, HEIGHT = 800, 600
WHITE = (255,255,255)
BLACK = (0,0,0)
RED = (255, 0, 0)
GREEN = (0,255,0)
BLUE = (0,0,255)
is_running = True
fps = 70
pg.display.set_caption("WELCOME TO THE CLUB, BUDDY")
screen = pg.display.set_mode((WIDTH,HEIGHT))

clock = pg.time.Clock()
x = 0
y = 100
dx = 10
rotation = 0
dy = 10
while is_running:
    clock.tick(60)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            is_running = False

    screen.fill(WHITE)
    pg.draw.rect(screen, BLACK, (x,y, 100, 100), 10)
    # pg.draw.rect(screen, RED, (WIDTH // 2 - 25, HEIGHT//2 - 25, 50, 50) )

    # for i in range(0,100,10):
        # pg.draw.line(screen, BLUE, (0, i + 15),(100, 115 + i), 1)
    # pg.draw.line(screen, BLUE, (100, 15),(300, 15), 3)

    font = pg.font.Font(None, 50)
    text1 = font.render("SONY PlayStation", True, BLUE)

    screen.blit(text1, (30,70))

    font2 = pg.font.SysFont("Tahoma", 60, True, False)
    text2 = font2.render("XBOX", False, BLACK)

    # text2_rotated = pg.transform.rotate(text2, 180)
    # screen.blit(text2, (40,160))
    # screen.blit(text2_rotated, (40, 220))
    font2 = pg.font.SysFont("Times New Roman", 60, True, False)
    text2 = font2.render("COCK", True, BLACK)
    text2 = pg.transform.rotate(text2, rotation)
    rotation += 1
    screen.blit(text2,(300, 400))

    x += dx
    y += dy
    if x == WIDTH - 100 or x ==0 :
        dx *= (-1)
    if y == HEIGHT - 100 or y == 0:
        dy *= (-1)
    
    pg.display.flip()
        
pg.quit()
