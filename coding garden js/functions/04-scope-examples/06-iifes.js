function yo() {
  return "psy";
}

console.log(yo());

const getFood = function () {
  return ["apples", "bananas"];
};
console.log(getFood());

//iife - immidiately invoked function expression
const answer =(
  function yo(){
    return 'psy'
  }
)();

console.log(answer);
