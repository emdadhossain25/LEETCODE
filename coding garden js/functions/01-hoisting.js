// hoisting - js engine initial pass of function declaration at runtime

console.log(add(2, 6));

// this function hoisted to the top of the scope at run time
function add(a, b) {
  return a + b;
}
