
import pygame
from random import *
pygame.init()
WIDTH, HEIGHT = 800, 600

FPS = 30

WHITE = (255,255,255)
BLACK = (0, 0 , 0)
RED = (255, 0 , 0)
GREEN = (0, 255 , 0)
BLUE = (0, 0 , 255)
COLOR = RED
circ_x, circ_y = WIDTH //2, HEIGHT//2
dx, dy = randint(0,7), -randint(0,7)
step = 5
RAD = 30

r_width, r_height = 200, 30

c_x, c_y = WIDTH // 2, HEIGHT //2 + 200
r_x, r_y = WIDTH // 2, HEIGHT //2 + 200
first_event = pygame.USEREVENT

img = pygame.image.load("./img/background.jpg")

 
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Here we go again")

# font = pygame.font.Font("Times New Roman", 150)
# text = font.render("LOL", True ,BLACK)
clock = pygame.time.Clock()

finished = False

while not finished:
    clock.tick(FPS)
    m_pos = pygame.mouse.get_pos()     
    c_pos = (c_x,c_y + RAD)
    r_pos = (range(r_x, r_x + r_width), r_y)
    screen.fill(WHITE)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            finished = True
        if event.type == pygame.KEYDOWN and event.key == pygame.K_p:
            pygame.mixer.music.stop()
        if event.type == pygame.KEYDOWN and event.key == pygame.K_m:
            pygame.mixer.music.play(-1)

    


    pygame.draw.circle(screen, RED, (c_x, c_y), RAD)

    pygame.draw.rect(screen, BLUE, (m_pos[0] - r_width // 2, r_y, r_width, r_height))
    
    
    if c_y <= 0:
        dy *= -1
    if c_x <= 0 or c_x >= WIDTH:
        dx *= -1
    if c_pos[1]== r_y and c_pos[0] in range(m_pos[0] - r_width , m_pos[0] + r):

        dy *= -1
    c_x +=dx
    c_y += dy
        


    # screen.blit(img,(0,0))

    
    pygame.display.flip()
pygame.quit()
