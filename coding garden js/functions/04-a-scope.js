// when and where our variables are accessible



// global.name='Global Name'

// Levels of scope
// 1.Global Scope
  // window object in the browser
  // global
  // if its in global its accessible anywhere
// 2. File scope/ module scope 
  // accessible anywhere in the current module/file
// 3. Function Scope

// Error we never made a variable named answer
// console.log(answer);

// module scoped
// we can access this anywhere in this module


function sayHello() {
  console.log(name);
  if (true) {
    console.log(name);
  }

  for (let i = 0; i < 10; i++) {
    console.log(name);
    
  }
}


// this works as we are invoking the sayHello() after declaring name
let name ='Emdad';
 
sayHello()