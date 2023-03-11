function fizzbuzz(n) {
    let result=[]
    while (n>0) {
         let resultElement=''
        if (n%3===0) {
            resultElement+='Fizz'
        }
        if (n%5===0) {
            resultElement+='Buzz'
        }

        if (resultElement) {
            result[n-1]=resultElement
          
        }else{
            result[n-1]=n;
        }
       n--;
        
    }
    return result
}
console.log(fizzbuzz(15))
