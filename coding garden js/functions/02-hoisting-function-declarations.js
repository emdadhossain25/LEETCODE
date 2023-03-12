console.log(add(2,4));

// var is hoisted to top at runtime but not the declaration
var add = function(a,b){
  return a+b;
}