from turtle import circle
import pygame as pg

WIDTH = 800
HEIGHT = 600

FPS = 60
clock = pg.time.Clock()

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

pg.init()
screen = pg.display.set_mode((WIDTH, HEIGHT))
pg.display.set_caption("Here we go again!")

LOCATIONS = {
    30:  [60, 120, 180, 240, 300, 360, 420, 480, 540, 600, 660, 720],
    70: [60, 120, 180, 240, 300, 360, 420, 480, 540, 600, 660, 720],
    110: [60, 120, 180, 240, 300, 360, 420, 480, 540, 600, 660, 720]
}

class Rectangle(pg.sprite.Sprite):
    def __init__(self, x, y, color):
        super().__init__()
        self.width = 300
        self.height = 25
        self.x = x
        self.y = y
        self.color = color
        self.surf = pg.Surface((self.width, self.height))
        self.surf.fill(self.color)
        self.rect = self.surf.get_rect(center=(self.x, self.y))
    
    def move(self):
        keys = pg.key.get_pressed()

        if keys[pg.K_LEFT]:
            if self.rect.right >= WIDTH:
                self.x = WIDTH
            self.rect.move_ip(-5, 0)

        if keys[pg.K_RIGHT]:
            if self.rect.left <= 0:
                self.rect.move_ip(0, 0)
            self.rect.move_ip(5, 0)

class Circle(pg.sprite.Sprite):
    def __init__(self, x, y):
        super().__init__()
        self.r = 30
        self.x = x
        self.y = y
        self.surf = pg.Surface((self.r*2, self.r*2), pg.SRCALPHA)
        self.rect = self.surf.get_rect(center = (self.x, self.y))
        self.draw()
    
    def move(self):
        pass

    def draw(self):
        pg.draw.circle(self.surf, (0, 0, 255), (self.r, self.r), self.r)


running = True

r1 = Rectangle(WIDTH//2, 500, BLACK)
c1 = Circle(20, 100)
sprites = pg.sprite.Group([r1, c1])
while running:
    clock.tick(FPS)
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = False
    screen.fill(WHITE)
    for i in sprites:
        screen.blit(i.surf, i.rect)
        i.move()
    pg.display.update()
pg.quit()