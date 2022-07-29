import pygame as pg
from random import randint

WIDTH = 1024 
HEIGHT = 704    
FPS = 50
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
x , y = 50 , 425
pg.init()
screen = pg.display.set_mode((WIDTH, HEIGHT))
pg.display.set_caption("Snake game")
clock = pg.time.Clock()

speed = 5
# running = True
# is_jump = False
anim_count = 0
# jump_count = 10

# isJump = False
# jumpCount = 10

class Player(pg.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.is_jump = False
        self.jump_count = 10
        self.direction = 'face'
        self.surf = pg.Surface((60,71))
        self.rect = self.surf.get_rect(center = (20, HEIGHT - 50))
        self.index = 0
        # self.rect = self.surf.get_rect(center = (400, 500))
        # self.image = pg.image.load(f"left{self.index}.png") 
        
                 
    def animate(self):
        self.index += 1
        self.index %= 2
    def move(self):
        keys = pg.key.get_pressed()
           
        print(self.direction)
        if keys[pg.K_a]:
            
            self.rect.x -= 5
            self.direction = "left"
        
        else:
            self.direction = "face"
        
        if keys[pg.K_d]:    
            self.rect.x += 5
            self.direction = 'right'

        if self.is_jump == True:
            if self.jump_count >= -10:
                self.rect.y -= (self.jump_count * abs(self.jump_count)) * 0.5
                self.jump_count -= 1
            else: 
                self.jump_count = 10
                self.is_jump = False
        
        # if not (self.is_jump):
        #     if keys[pg.K_w]:                  #допилить колизию с рамками экрана
        #         self.rect.y -= speed
            
        #     if keys[pg.K_s]:
        #         self.rect.y += speed
            
        #     if keys[pg.K_SPACE]:
        #         self.is_jump = True
            
        #     else:
            
        #         if self.jump_count >= -10:
            
        #             if self.jump_count < 0:
        #                 self.rect.y += (self.jump_count ** 2) / 2
            
        #             else:
        #                 self.rect.y -= (self.jump_count ** 2) / 2
            
        #             self.jump_count -= 1
            
        #         else:
        #             self.is_jump = False
        #             self.jump_count = 10
    
    
    def draw(self):
        self.surf.fill(BLACK)
        
        if self.direction == 'left':
            self.image = pg.image.load(f"left{self.index}.png") 
        
        if self.direction == "right": 
            self.image = pg.image.load(f"right{self.index}.png") 
        
        elif self.direction == "face":
            self.image = pg.image.load("face.png")   
        
        self.surf.blit(self.image, (0,0))
        
        screen.blit(self.surf, (self.rect.x, self.rect.y))


running = True

p = Player()
players = pg.sprite.Group()
players.add(p)

while running:
    clock.tick(FPS)
    current_y = p.rect.y
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = False
        if event.type == pg.KEYDOWN :
            if event.key == pg.K_SPACE:
                p.is_jump = True
                
    # if p.is_jump :
    #     p.rect.y -= 20
    # if abs(p.rect.y - current_y) >= 50:
    #     p.is_jump = False
    # if p.is_jump and p.rect.y < HEIGHT :
    #     p.rect.y += 20
    
    
    for player in players:
        player.draw()
        player.animate()
        player.move()
    pg.display.flip()
    
pg.quit()