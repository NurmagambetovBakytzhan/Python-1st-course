import pygame as pg
#-----------------------------------
pg.init()
pg.display.set_caption('Cubes Game')
screen = pg.display.set_mode((500, 500))
walkR= [pg.image.load('pygame_right_1.png'),pg.image.load('pygame_right_2.png'), 
pg.image.load('pygame_right_3.png'), pg.image.load('pygame_right_4.png'), 
pg.image.load('pygame_right_5.png') ,pg.image.load('pygame_right_6.png')]

walkL= [pg.image.load('pygame_left_1.png'), pg.image.load('pygame_left_2.png'), pg.image.load('pygame_left_3.png'),
pg.image.load('pygame_left_4.png'), pg.image.load('pygame_left_5.png'), pg.image.load('pygame_left_6.png')]

stand = pg.image.load('pygame_idle.png')

bg = pg.image.load('pygame_bg.jpg')
#-----------------------------------
#colors:
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
#-----------------------------------
x = 50
y = 425
w = 60
h = 71
speed = 5
running = True
is_jump = False
jump_count = 10
l = False
r = False
anim_count = 0
clock = pg.time.Clock()
#-----------------------------------
def drawWindow():
    global anim_count
    screen.blit(bg, (0, 0))
    if anim_count + 1 >= 30:
        anim_count = 0

    if l:
        screen.blit(walkL[anim_count // 5], (x, y))
        anim_count +=1
    elif r:
        screen.blit(walkR[anim_count // 5], (x, y))
        anim_count += 1
    else:
        screen.blit(stand, (x, y))

    pg.display.flip()

#-----------------------------------
while running:
    # pg.time.delay(50) #колличесво миллисекунд через которые будет выполняться наш цикл
    clock.tick(30)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = False
    keys = pg.key.get_pressed()
    if keys[pg.K_LEFT] and x > 5:
        x-=speed
        l = True
        r = False
    elif keys[pg.K_RIGHT] and x < 500 - w - 5:
        x+=speed
        l = False
        r = True
    else:
        l = False
        r = False
        anim_count = 0
    if not (is_jump):
        if keys[pg.K_UP] and y > 5:
            y-=speed
        if keys[pg.K_DOWN] and y < 500 - h - 15:
            y+=speed
        if keys[pg.K_SPACE]:
            is_jump = True
    else:
        if jump_count >= -10:
            if jump_count < 0:
                y += (jump_count ** 2) / 2
            else:
                y -= (jump_count ** 2) / 2
            jump_count -= 1
        else:
            is_jump = False
            jump_count = 10

    drawWindow()

pg.quit()