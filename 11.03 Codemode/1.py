import pygame
pygame.init()
WIDTH, HEIGHT = 800, 600

FPS = 30

WHITE = (255,255,255)
BLACK = (0, 0 , 0)
RED = (255, 0 , 0)
GREEN = (0, 255 , 0)
BLUE = (0, 0 , 255)

circ_x, circ_y = WIDTH //2, HEIGHT//2
step = 30

RAD = 100
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Here we go again")

clock = pygame.time.Clock()

finished = False

while not finished:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            finished = True
        if event.type == pygame.KEYDOWN :
            if event.key == pygame.K_RIGHT and circ_x + RAD  < WIDTH:
                circ_x += step
            if event.key == pygame.K_LEFT and circ_x - RAD > 0:
                circ_x -= step
            if event.key == pygame.K_UP and circ_y - RAD > 0:
                circ_y-= step
            if event.key == pygame.K_DOWN and circ_y + RAD  < HEIGHT:
                circ_y += step
    circ_x += step
    circ_y += step
            
            
    screen.fill(WHITE)

    pygame.draw.circle(screen, RED, (circ_x, circ_y), RAD)

    pygame.display.flip()
pygame.quit()
