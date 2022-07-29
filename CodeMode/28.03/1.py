from tokenize import Whitespace
import pygame as pg

WIDTH = 800
HEIGHT = 600
FPS = 60
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

pg.init()
screen = pg.display.set_mode((WIDTH, HEIGHT))
pg.display.set_caption("Bruuuh")
clock = pg.time.Clock()

running = True


class Hero(pg.sprite.Sprite):
    def __init__(self, x, y, color):
        super().__init__()
        self.width = 60
        self.height = 60
        self.x = x
        self.y = y
        self.surf = pg.Surface((self.x, self.y))
        self.rect = self.surf.get_rect(center=(self.x, self.y))
        self.image = pg.image.load("roocket.png")
    
    def move(self):
        keys = pg.key.get_pressed()
        if keys[pg.K_LEFT]:
            if self.rect.right <= 0:
                self.rect.left = WIDTH
            self.rect.move_ip(-5, 0)

        if keys[pg.K_RIGHT]:
            if self.rect.left >= WIDTH:
                self.rect.right = 0
            self.rect.move_ip(5, 0)

        if keys[pg.K_DOWN]:
            if self.rect.top >= HEIGHT:
                self.rect.bottom = 0
            self.rect.move_ip(0, 5)

        if keys[pg.K_UP]:
            if self.rect.bottom <= 0:
                self.rect.top = HEIGHT
            self.rect.move_ip(0, -5)
        def draw(self):
            screen.blit(self.surf,self.image)

r1 = Hero(400, 500, RED)
sprites = pg.sprite(r1)

while running:
    clock.tick(FPS)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = 0
    screen.fill(WHITE)
    for i in  sprites:  
        screen.blit(i.surf,i.rect)
        i.move 
    

    pg.display.update()
pg.quit()