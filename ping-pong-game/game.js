var movePaddle1 = 0;
var movePaddle2 = 0;
var positionPaddle1 = document.getElementById("paddle1").offsetTop;
var positionPaddle2 = document.getElementById("paddle2").offsetTop;
console.log(positionPaddle1);
var heightPaddle1 = 150;
var heightPaddle2 = 150;
var topPositionBall;
var leftPositionBall;
var moveBallVertical;
var moveBallHorizontal;
var ballHeight = 25;
var widthPaddle1 = 30;
var widthPaddle2 = 30;
var centerPositionBallTop =  document.getElementById("ball").offsetTop;
var centerPositionBallLeft = document.getElementById("ball").offsetLeft;
var score1 = 0;
var score2 = 0;
var soundObj = new Audio();


window.onload = runGame;

function runGame(){
    function startBall(){
        score1 = 0;
        score2 = 0;
        topPositionBall = centerPositionBallTop
        leftPositionBall = centerPositionBallLeft;
    
        if(Math.random() < 0.5){
            var side = 1;
        }else{
            var side = -1;
        }
    
        moveBallHorizontal = side * (Math.random() *6 + 5);
        moveBallVertical = Math.random() * 6 + 5;
    }
    startBall();
    document.addEventListener("keydown" , function(event){

        // W
        if(event.keyCode == 87 || event.which == 87){
            movePaddle1 = -10;
        }
    
        //S
        if(event.keyCode == 83 || event.which == 83){
            movePaddle1 = 10;
        }
    
        //Up
        if(event.keyCode == 38 || event.which == 38){
            movePaddle2 = -10;
        }
    
        //Down
        if(event.keyCode == 40 || event.which == 40){
            movePaddle2 = 10;
        }
    });
    
    document.addEventListener("keyup" , function(event){
    
        // W
        if(event.keyCode == 87 || event.which == 87){
            movePaddle1 = 0;
        }
    
        //S
        if(event.keyCode == 83 || event.which == 83){
            movePaddle1 = 0;
        }
    
        //Up
        if(event.keyCode == 38 || event.which == 38){
            movePaddle2 = 0;
        }
    
        //Down
        if(event.keyCode == 40 || event.which == 40){
            movePaddle2 = 0;
        }
    });
    
    window.setInterval(function move(){
        positionPaddle1 +=movePaddle1;
        positionPaddle2 +=movePaddle2;
        topPositionBall += moveBallVertical;
        leftPositionBall += moveBallHorizontal;
        
        // Stop paddle from moving window top
        if(positionPaddle1 <= 1){
            positionPaddle1 = 1;
        }
        if(positionPaddle2 <= 1){
            positionPaddle2 = 1;
        }
    
        //Stop paddle from moving window down
        if(positionPaddle1 >= window.innerHeight - heightPaddle1){
            positionPaddle1 = window.innerHeight - heightPaddle1;
        }
    
        if(positionPaddle2 >= window.innerHeight - heightPaddle2){
            positionPaddle2 = window.innerHeight - heightPaddle2;
        }
    
        //Stop ball from moving out of window Vertically
        if(topPositionBall <= ballHeight || topPositionBall >= window.innerHeight-ballHeight){
            moveBallVertical = -1*moveBallVertical;
    
        }
       
    
        //Collision with Paddle
      
        if(leftPositionBall <= widthPaddle1){
            positionPaddle1 = document.getElementById("paddle1").offsetTop;
            if(positionPaddle1 <= topPositionBall && positionPaddle1+heightPaddle1 >= topPositionBall){
                moveBallHorizontal = -moveBallHorizontal;
                score1++;
                soundObj.src = "bat+hit+ball.mp3";
                soundObj.play();
            }else{
                soundObj.src = "Hole+In+One.mp3";
                soundObj.play();
                startBall();
                console.log("hii");
            }
        }
    
        
        if(leftPositionBall >= window.innerWidth-widthPaddle2){
            positionPaddle2 = document.getElementById("paddle2").offsetTop;
            if(positionPaddle2 <= topPositionBall && positionPaddle2+heightPaddle2 >= topPositionBall){
                moveBallHorizontal = -moveBallHorizontal;
                score2++;
                soundObj.src = "bat+hit+ball.mp3";
                soundObj.play();
            }else{
                soundObj.src = "Hole+In+One.mp3";
                soundObj.play();
                startBall();
                console.log("bii");
            }
        }
        
        // topPositionBall += moveBallVertical;
        // leftPositionBall += moveBallHorizontal;
    
        document.getElementById("paddle1").style.top = positionPaddle1 + "px";
        document.getElementById("paddle2").style.top = positionPaddle2 + "px";
    
        
         document.getElementById("ball").style.top = topPositionBall + "px";
         document.getElementById("ball").style.left = leftPositionBall + "px";
    
         document.getElementById("score1").innerHTML = score1;
         document.getElementById("score2").innerHTML = score2;
    } , 1000/60);

}


