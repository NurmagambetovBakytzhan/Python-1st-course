import pygame
from random import randint, randrange
pygame.init()

WIDTH, HEIGHT = 800, 800
FPS = 10
cell = 40

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
PURPLE = (221,160,221)

screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption('Snake')

clock = pygame.time.Clock()

running = True

class Food:
    def __init__(self):
        self.x = randrange(0, WIDTH, cell)
        self.y = randrange(0, HEIGHT, cell)
    def draw(self):
        pygame.draw.rect(screen, RED, (self.x, self.y, cell, cell)) 
    def redraw(self):
        self.x = randrange(0, WIDTH, cell)
        self.y = randrange(0, HEIGHT, cell)

class Snake:
    def __init__(self):
        self.speed = cell
        self.body = [[80, 80]]
        self.dx = 0
        self.dy = 0
        self.destination = ''
        self.color = GREEN
    
    def move(self, events):
        for event in events:
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
        for i in range(len(self.body) - 1, 0, -1):
            self.body[i][0] = self.body[i - 1][0]
            self.body[i][1] = self.body[i - 1][1]

        self.body[0][0] += self.dx
        self.body[0][1] += self.dy

    def draw(self):
        for block in self.body:
            pygame.draw.rect(screen, self.color, (block[0], block[1], cell, cell))
    
    def collide_food(self, food : Food):
        if self.body[0][0] == food.x and self.body[0][1] == food.y:
            food.redraw()
            self.body.append([1000, 1000])
    
    def collide_self(self):
        if self.body[0] in self.body[1:]:
            running = False

snake = Snake()
food = Food()

while running:
    clock.tick(FPS)
    events = pygame.event.get()
    for event in events:
        if event.type == pygame.QUIT:
            running = False
    screen.fill(WHITE)

    for i in range(0, WIDTH, cell):
        for j in range(0, HEIGHT, cell):
            pygame.draw.rect(screen, BLACK, (i, j, cell, cell), 1)

    food.draw()
    snake.draw()
    snake.move(events)
    snake.collide_food(food)
    snake.collide_self()

    pygame.display.flip()
pygame.quit()