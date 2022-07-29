import pygame as pg

pg.init()
pg.display.set_caption('Cubes Game')
screen = pg.display.set_mode((1024, 700))
walkR= [pg.image.load('pygame_right_1.png'),pg.image.load('pygame_right_2.png'), 
pg.image.load('pygame_right_3.png'), pg.image.load('pygame_right_4.png'), 
pg.image.load('pygame_right_5.png') ,pg.image.load('pygame_right_6.png')]
# pg.mixer.music.load('')
walkL= [pg.image.load('pygame_left_1.png'), pg.image.load('pygame_left_2.png'), pg.image.load('pygame_left_3.png'),
pg.image.load('pygame_left_4.png'), pg.image.load('pygame_left_5.png'), pg.image.load('pygame_left_6.png')]

stand = pg.image.load('pygame_idle.png')

bg = pg.image.load('pygame_bg.jpg')
x = 50
y = 625
w = 60
h = 71
speed = 5
running = True
is_jump = False
jump_count = 9
l = False
r = False
anim_count = 0
clock = pg.time.Clock()

class Player(pg.sprite.Sprite):
    def __init__(self):
        super().__init__()
        # self.direction = 'face'
        self.surf = pg.Surface((60,71))
        self.rect = self.surf.get_rect(center=(1024//2, 700//2))
        self.index = 1
        self.rect = self.surf.get_rect(center = (400, 500))
        # self.image = pg.image.load(f"left{self.index}.png") 
        
                 
    # def animate(self):
    #     self.index += 1
    #     self.index %= 2
    def move(self):
        global x, y, l , r, anim_count, is_jump, jump_count
        keys = pg.key.get_pressed()
        if keys[pg.K_a] and x > 5:
            x-=speed
            l = True
            r = False
        elif keys[pg.K_d] and x < 1024 - w - 5:
            x+=speed
            l = False
            r = True
        else:
            l = False
            r = False
            anim_count = 0
        if not (is_jump):
            if keys[pg.K_SPACE]:
                is_jump = True
        if is_jump:
            if jump_count >= -9:
                if jump_count < 0:
                    y += (jump_count ** 2) / 2
                else:
                    y -= (jump_count ** 2) / 2
                jump_count -= 1
        else:
            is_jump = False
            jump_count = 9
        
    def draw(self):
        global anim_count, walkL, walkR, stand
        screen.blit(pg.transform.scale(bg, (1024, 700)), (0, 0))
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
        # self.surf.fill(BLACK)
        # if self.direction == 'left':
            
        #     self.image = pg.image.load(f"pygame_left_{self.index}.png") 
        # if self.direction == "right":
            
        #     self.image = pg.image.load(f"pygame_right_{self.index}.png") 
        # elif self.direction == "face":
        #     self.image = pg.image.load("pygame_idle.png")   
        # self.surf.blit(self.image, (0,0))
        # screen.blit(self.surf, (20, 20))

class Monetki(pg.sprite.Sprite):
    def __init__ (self, x, y):
        super().__init__()
        self.x, self.y = x, y
        self.surf = pg.Surface((24, 24), pg.SRCALPHA)
        self.rect = self.surf.get_rect(center=(x, y))
        self.im = pg.image.load('coin.png')

    def draw(self):
        self.surf.blit(pg.transform.scale(self.im, (24,24)), (0, 0))
        screen.blit(self.surf, self.rect)

class Walls:
    def __init__ (self, x, y):
        self.x, self.y = x, y
        self.im = pg.image.load('stena.png')

    def draw(self):
        screen.blit(self.im, (self.x, self.y))

level = 1
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
# C1 = Monetki()
COINS = pg.sprite.Group()
p = Player()
players = pg.sprite.Group()
players.add(p)
# def drawWindow():
#     global anim_count
#     screen.blit(pg.transform.scale(bg, (1024, 700)), (0, 0))
    
#     if anim_count + 1 >= 30:
#         anim_count = 0

#     if l:
#         screen.blit(walkL[anim_count // 5], (x, y))
#         anim_count +=1
#     elif r:
#         screen.blit(walkR[anim_count // 5], (x, y))
#         anim_count += 1
#     else:
#         screen.blit(stand, (x, y))

uroven = 1
while running:
    clock.tick(30)
    # drawWindow()        
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = False

    lev_file = open(f'lev{level}.txt', 'r').readlines()
    walls = []
    coin_file = open(f'coin{uroven}.txt', 'r').readlines()
    for player in players:
        player.draw()
        player.move()
    for i, line in enumerate(lev_file):
        for j, each in enumerate(line):
            if each == '#':
                walls.append(Walls(j * 32, i * 32))

    for i, line in enumerate(coin_file):
        for j, each in enumerate(line):
            if each == '$':
                COINS.add(Monetki(j*24, i*24))
    for coin in COINS:
        coin.draw()
    for wall in walls:
        wall.draw()
    # keys = pg.key.get_pressed()
    # if keys[pg.K_a] and x > 5:
    #     x-=speed
    #     l = True
    #     r = False
    # elif keys[pg.K_d] and x < 1024 - w - 5:
    #     x+=speed
    #     l = False
    #     r = True
    # else:
    #     l = False
    #     r = False
    #     anim_count = 0
    # if not (is_jump):
    #     if keys[pg.K_SPACE]:
    #         is_jump = True
    # if is_jump:
    #     if jump_count >= -9:
    #         if jump_count < 0:
    #             y += (jump_count ** 2) / 2
    #         else:
    #             y -= (jump_count ** 2) / 2
    #         jump_count -= 1
    #     else:
    #         is_jump = False
    #         jump_count = 9
    pg.display.flip()

pg.quit()