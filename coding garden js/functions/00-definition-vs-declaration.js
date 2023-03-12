// definition
function add(a, b) {
  return a + b;
}

//declaration
//expression
// using function keyword
var declaration = function (a, b) {
  return a + b;
};

//declaration
//expression
//using arrow function
var arrowFunctionDeclaration = (a, b) => {
  return a + b;
};
console.log(add(2, 5));
console.log(declaration(5, 4));
console.log(arrowFunctionDeclaration(7, 7));
