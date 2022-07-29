import pygame as pg 
 
pg.init() 
w, h = 800, 600 
screen = pg.display.set_mode((w, h)) 
green = (0, 255, 0) 
blue = (0, 0, 255) 
red = (255, 0, 0)
WHITE = (255,255,255)
BLACK = (0,0,0)
is_running = True 
clock = pg.time.Clock() 
 
font = pg.font.SysFont("Times New Roman", 20, True)

lose = False

c1, c2 = w // 2, h // 2 
dc1, dc2 = 5, -5 
r = 20 

score1 = 0
score2 = 0
FPS = 60
r1, r2 = 50, h // 2 - 100 
r3, r4 = 750, h // 2 - 100 
 
while is_running: 
    clock.tick(50) 
    for event in pg.event.get(): 
        if event.type == pg.QUIT: 
            is_running = False 
    screen.fill((255, 255, 255)) 
    
    pg.draw.circle(screen, green, (c1, c2), 20) 
    pg.draw.rect(screen, red, (r1, r2, 10, 200)) 
    pg.draw.rect(screen, blue, (r3, r4, 10, 200)) 
    if r2 + 200  >= 600: 
        r2 = 600 - 200 
     
    if r2 <= 0: 
        r2 = 0 
     
    if r4 +200  >= 600: 
        r4 = 600 - 200 
     
    if r4 <= 0: 
        r4 = 0
 
    if c2 + r >= h or c2 - r <= 0: 
        dc2 *= -1 
     
    c1 += dc1 
    c2 += dc2 

    keys = pg.key.get_pressed()
    if keys[pg.K_UP]:
        r4 -= 3
    elif keys[pg.K_DOWN]:
        r4 += 3
    if keys[pg.K_w]:
        r2 -= 3
    elif keys[pg.K_s]:
        r2 += 3
    
    ball_point = (c1,c2)
    
    if ball_point[0] == w  :
        
        lose = True
    if ball_point[0] == 0:
        
        lose = True
    

    if (ball_point[1] in range(r2  , r2 + 200) and ball_point[0] == r1 + r):
        dc2 *= -1
        dc1 *= -1
        score1 += 1
    if (ball_point[1] in range(r4 , r4 + 200 ) and ball_point[0] == r3 - r):
        dc1 *= -1
        dc2 *= -1
        score2 += 1
    while lose:
        clock.tick(FPS)
        for event in pg.event.get():
            if event.type == pg.QUIT:
                is_running = False
                lose = False
            if event.type == pg.KEYDOWN:
                c1, c2 = w // 2, h // 2
                
                lose = False
                running = True
        pg.draw.rect(screen, BLACK, (w // 2 - 100, h // 2 - 100, 200, 200))
        text1 = font.render(f"ROUND ENDED", True, BLACK)
        if score1> score2:
            text = font.render(f"Winner is #1", True, green)
            text2 = font.render(f"Current score is {score1}", True, green)
        else:
            text = font.render(f"Winner is #1", True, green)
            text2 = font.render(f"Current score is  {score2}", True, green)
        screen.blit(text1,(w//2 - 100 , h//2 - 120 ))
        screen.blit(text, (w//2 - 100, h //2) )
        screen.blit(text2,(w//2 - 100, h//2 - 20))
        pg.display.flip()    

    

    pg.display.flip() 
pg.quit()