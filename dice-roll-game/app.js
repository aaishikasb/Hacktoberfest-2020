let playerscore1 = 0;
let playerscore2 = 0;
let currentscore1 = 0;
let currentscore2 = 0;
let player1Turn = true;
let player2Turn = false;
let player1final = 0;
let player2final = 0;

function newgame(){
	let player2Div = document.getElementById("player-2");
	player2Div.classList.remove("bg-grey");
	player1Turn = true;
	playerscore1 = 0;
	playerscore2 = 0;
	currentscore1 = 0;
	currentscore2 = 0;
	document.getElementById('player-1-score').innerHTML = playerscore1;
	document.getElementById('player-2-score').innerHTML = playerscore2;
	document.getElementById('player-1-current').innerHTML = currentscore1;
	document.getElementById('player-2-current').innerHTML = currentscore2;
	document.getElementById('myImg').src = 'dice-1.png';
}

function rolldice(){
	if(player1Turn === true){
		console.log(player1Turn);
		let player1Div = document.getElementById("player-1");
		player1Div.classList.add("bg-grey");
		let img = ["dice-1.png", "dice-2.png", "dice-3.png", "dice-4.png", "dice-5.png", "dice-6.png"]
	    let x = img[Math.floor(Math.random() * img.length)];
		document.getElementById("myImg").src = x;
		if (x === 'dice-1.png'){
			currentscore1 = 0;
			hold();
		}
		else if (x === 'dice-2.png'){
			currentscore1 = currentscore1 + 2;
		}
		else if (x === 'dice-3.png'){
			currentscore1 = currentscore1 + 3;
		}
		else if (x === 'dice-4.png'){
			currentscore1 = currentscore1 + 4;
		}
		else if (x === 'dice-5.png'){
			currentscore1 = currentscore1 + 5;
		}
		else if (x === 'dice-6.png'){
			currentscore1 = currentscore1 + 6;
		}

		if (currentscore1 > 0)
		{
			document.getElementById('player-1-current').innerHTML = currentscore1;
		}

		if(currentscore1 > 99){
			let player1Div = document.getElementById("player-1");
			player1Div.classList.add("color-red");
			alert('Player 1 Wins!');
			newgame();
			player1final = player1final + 1;
			document.getElementById('player-1-final').innerHTML = player1final;
		}
	}
	else if(player2Turn === true){
		let player2Div = document.getElementById("player-2");;
		player2Div.classList.add("bg-grey");
		let img = ["dice-1.png", "dice-2.png", "dice-3.png", "dice-4.png", "dice-5.png", "dice-6.png"]
	    let x = img[Math.floor(Math.random() * img.length)];
		document.getElementById("myImg").src = x;
		if (x === 'dice-1.png'){
			currentscore2 = 0;
			hold();
		}
		else if (x === 'dice-2.png'){
			currentscore2 = currentscore2 + 2;
		}
		else if (x === 'dice-3.png'){
			currentscore2 = currentscore2 + 3;
		}
		else if (x === 'dice-4.png'){
			currentscore2 = currentscore2 + 4;
		}
		else if (x === 'dice-5.png'){
			currentscore2 = currentscore2 + 5;
		}
		else if (x === 'dice-6.png'){
			currentscore2 = currentscore2 + 6;
		}

		if(currentscore2 > 0)
		{
			document.getElementById('player-2-current').innerHTML = currentscore2;
		}

		if(currentscore2 > 99){
			let player2Div = document.getElementById("player-2");
			player2Div.classList.add("color-red");
			alert('Player 2 Wins!');
			newgame();
			player2final = player2final + 1;
			document.getElementById('player-2-final').innerHTML = player2final;
		}
	}
}

function hold(){
	if(player1Turn === true){
		player1Turn = false;
		if(player1Turn === false){
			playerscore1 = playerscore1 + currentscore1;
			document.getElementById('player-1-score').innerHTML = playerscore1;
			currentscore1 = 0;
			document.getElementById('player-1-current').innerHTML = currentscore1;
			let player1Div = document.getElementById("player-1");
			player1Div.classList.remove("bg-grey");
			let player2Div = document.getElementById("player-2");;
			player2Div.classList.add("bg-grey");
			player2Turn = true;

			if(playerscore1 > 99){
				let player1Div = document.getElementById("player-1");
				player1Div.classList.add("color-red");
				alert('Player 1 Wins!');
				newgame();
				player1final = player1final + 1;
				document.getElementById('player-1-final').innerHTML = player1final;
			}
		}
	}

	else if(player2Turn === true){
		player2Turn = false;
		if(player2Turn === false){
			playerscore2 = playerscore2 + currentscore2;
			document.getElementById('player-2-score').innerHTML = playerscore2;
			currentscore2 = 0;
			document.getElementById('player-2-current').innerHTML = currentscore2;
			let player2Div = document.getElementById("player-2");
			player2Div.classList.remove("bg-grey");
			let player1Div = document.getElementById("player-1");;
			player1Div.classList.add("bg-grey");
			player1Turn = true;

			if(playerscore2 > 99){
				let player2Div = document.getElementById("player-2");
				player2Div.classList.add("color-red");
				alert('Player 2 Wins!');
				newgame();
				player2final = player2final + 1;
				document.getElementById('player-2-final').innerHTML = player2final;
			}
		}
	}

}



