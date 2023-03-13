let name ='Emdad'

// name parameter shadows the module scope name variable
function greet(name){
  return `Hello ${name}`;
}
console.log(greet(`chief mustardo`));
console.log(name);