import turtle
wn = turtle.Screen()
wn.title("pong")
wn.bgcolor("green")
wn.setup(width=800,height=600)
wn.tracer(0)
paddlea=turtle.Turtle()
paddlea.speed(0)
paddlea.shape("square")
paddlea.color("white")
paddlea.shapesize(stretch_wid=5,stretch_len=1)
paddlea.penup()
paddlea.goto(-350,0)
paddleb=turtle.Turtle()
paddleb.speed(0)
paddleb.shape("square")
paddleb.color("white")
paddleb.shapesize(stretch_wid=5,stretch_len=1)
paddleb.penup()
paddleb.goto(350,0)
ball=turtle.Turtle()
ball.speed(0)
ball.shape("square")
ball.color("white")
ball.penup()
ball.goto(0,0)
ball.dx=0.05
ball.dy=0.05
def paddleaup():
    y=paddlea.ycor()
    y+=20
    paddlea.sety(y)
def paddleadw():
    y=paddlea.ycor()
    y-=20
    paddlea.sety(y)

def paddlebup():
        y = paddleb.ycor()
        y += 20
        paddleb.sety(y)

def paddlebdw():
        y = paddleb.ycor()
        y -= 20
        paddleb.sety(y)
wn.listen()
wn.onkeypress(paddleaup,"w")
wn.onkeypress(paddleadw,"s")
wn.onkeypress(paddlebup,"Up")
wn.onkeypress(paddlebdw,"Down")
while True:
    wn.update()
    ball.setx(ball.xcor()+ ball.dx)
    ball.sety(ball.ycor()+ ball.dy)
    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy *=-1
    if ball.ycor() < -290:
            ball.sety(-290)
            ball.dy *= -1
    if ball.xcor()>390:
         ball.goto(0,0)
         ball.dx *=-1
    if ball.xcor()<-390:
         ball.goto(0,0)
         ball.dx *=-1
    if ball.xcor()>340 and ball.ycor()<paddleb.ycor()+40 and ball.ycor()> paddleb.ycor()- 40:
        ball.setx(340)
        ball.dx *= -1
    if ball.xcor()< -340 and ball.ycor()<paddlea.ycor()+40 and ball.ycor()> paddlea.ycor()- 40:
        ball.setx(-340)
        ball.dx *= -1
