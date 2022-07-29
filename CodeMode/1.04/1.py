from random import randint, randrange
import pygame
pygame.init()
WIDTH, HEIGHT = 800, 800
FPS = 50
cell = 40

BLACK = (0,0,0)
RED = (255,0,0)
GREEN = (0,255,0)
BLUE = (0, 0 , 255)
WHITE = (255,255,255)

screen = pygame.display.set_mode((WIDTH, HEIGHT))

clock = pygame.time.Clock()

class Snake:
    def __init__(self):
        self.speed = cell
        self.x = 80
        self.y = 80
        self.body = [[self.x,self.y]]
        self.dx = 0
        self.dy = 0
        self.destination = ''
        self.color = GREEN
    def move(self):
        for event in pygame.event.get():
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT and self.destination != 'right':
                    self.dx = -self.speed
                    self.dy = 0
                    self.destination = 'left'
                if event.key == pygame.K_RIGHT and self.destination != 'left':
                    self.dx = self.speed
                    self.dy = 0
                    self.destination = 'right'
                if event.key == pygame.K_UP and self.destination != 'down':
                    self.dx = 0
                    self.dy = -self.speed
                    self.destination = 'up'
                if event.key == pygame.K_DOWN and self.destination != 'up':
                    self.dx = 0
                    self.dy = self.speed
                    self.destination = 'down'
        for i in range(len(self.body) - 1, 0 , -1):
            self.body[i] = self.body[i - 1]
        self.body[0][0] += self.dx
        self.body[0][1] += self.dy 
    def draw(self):
        for block in self.body:
            pygame.draw.rect(screen, self.color, (block[0], block[1], cell , cell))

    def collide_food(self, f:Food):
        if self.body[0][0] == f.x and self.body[0][1] == f.y:
            f.redraw()
            self.body.append([1000,1000])
    def collide_self(self):
        if self.body[0] in self.body[1:]:
            finished = True
class Food:
    def __init__(self):
        
        # self.x = randint(0, WIDTH) % cell * 40
        # self.y = randint(0, HEIGHT) % cell * 40
        self.x = randrange(0,WIDTH, cell)
        self.y = randrange(0,HEIGHT,cell)
    def draw(self):
        pygame.draw.rect(screen, RED, (self.x, self.y, cell, cell))
    

finished = False

while not finished:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT():
            finished = True


