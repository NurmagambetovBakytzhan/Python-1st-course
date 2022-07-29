
import pygame
from random import *
pygame.init()
WIDTH, HEIGHT = 1402, 1080

FPS = 30

WHITE = (255,255,255)
BLACK = (0, 0 , 0)
RED = (255, 0 , 0)
GREEN = (0, 255 , 0)
BLUE = (0, 0 , 255)
COLOR = RED
circ_x, circ_y = WIDTH //2, HEIGHT//2
dx, dy = 0, 0
step = 5
RAD = 100

first_event = pygame.USEREVENT

img = pygame.image.load("./img/background.jpg")

pygame.mixer.music.load("bob.mp3")
pygame.mixer.music.play(-1)
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Here we go again")

font = pygame.font.Font("Times New Roman", 150)
text = font.render("LOL", True ,BLACK)
clock = pygame.time.Clock()

finished = False

while not finished:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            finished = True
        if event.type == pygame.KEYDOWN :
            if event.key == pygame.K_RIGHT :
                dx = step
                dy = 0
            if event.key == pygame.K_LEFT :
                dx = -step
                dy = 0
            if event.key == pygame.K_UP :
                dy = -step
                dx = 0
            if event.key == pygame.K_DOWN :
                dy = +step
                dx = 0
            if event.key == pygame.K_SPACE:
                COLOR = (randint(0,255), randint(0,255), randint(0,255))
            if event.key == pygame.K_w:
                step += 5
            if event.key == pygame.K_s and step > 0:
                step -= 5
    
    circ_x += dx
    circ_y += dy
    
    
            
            
    screen.fill(WHITE)

    pygame.draw.circle(screen, COLOR, (circ_x, circ_y), RAD)

    screen.blit(img,(0,0))

    
    pygame.display.flip()
pygame.quit()
