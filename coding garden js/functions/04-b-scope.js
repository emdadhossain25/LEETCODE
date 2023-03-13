require('./04-a-scope')

//  only works if name is a global variable 
// module means its only accessible to that specific file
// browswer might show this using html script
// let name ='CJ'
console.log(name);

function createGame(){
  const gameName='CodinGame';
  const players=['andruz','titanfus','MarkBoots']
  console.log(gameName);
  console.log(players);

  return{
    getName(){
      return gameName
    },
    getPlayers(){
      return players
    },
    addPlayer(name){
      players.push(name)
    }
  }

}

var game =createGame()
// this is closure coz we can access variables after the function has finished
console.log(game.getName());

console.log(game.getPlayers());
