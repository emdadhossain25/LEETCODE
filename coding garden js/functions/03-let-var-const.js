// Don't use var
//1. hoisted to the top of scope may introduce undefined variable bugs
// 2.

// var is hoisted value is undefined doesn't give error
// const let are hoisted with error saying can't be accessed before initializing
// 1. if a variable is re-assigned use let
// 2. if a variable will not be re-assigned use const
// 3. const and let have block scope (anything with curly braces is a block, if, while,for and functions)

function doTheThingWithLet() {
  console.log(result);
  if (true) {
    console.log("yeah");
  }
  let result = 42;
}

function doTheThing() {
  console.log(result);
  if (true) {
    console.log("yeah");
  }
  var result = 42;
}
function doTheThingWithConst() {
  console.log(result);
  if (true) {
    console.log("yeah");
  }
  const result = 42;
}

doTheThing();

const result = 42;
console.log(result);
console.log(result + 2);
// result = 90; //ERROR assignment to constant variable

const person = {
  name: "cj",
};
// person={
//   name:'ashhel'
// };

// this works! we are changing internal properties, not the assignment
person.name = "ashhel";
console.log(person);
