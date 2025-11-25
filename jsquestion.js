// 1. Reverse a string

// Input: "hello"
// Output: "olleh"

// let str="sumit"
// let rv =""

// for(let i=str.length-1;i>=0;i--){
//     rv=rv+str[i];
// }

// console.log(rv)




// 2. Check if a number is prime

// Input: 7


// let num =prompt("enter any number:")
// let count = 0;

// for (let i = 1; i <= num; i++) {
//     if (num % i === 0) {
//         count++;
//     }
// }

// if (count === 2) {
//     console.log("true");   // prime
// } else {
//     console.log("false");  // not prime
// }



// 3. Find the largest number in an array
// 


// let arr = [10, 20, 5, 30]

// let max=arr[0];
// for(let i=0;i<arr.length;i++){
//     if(arr[i]<max){
//         max=arr[i];
//     }
// }
// alert(max);


// 4. Remove duplicates from an array

// Input: [1, 2, 2, 3, 4, 4]
// Output: [1, 2, 3, 4]


// let arr=[1,2,2,3,4,4];
// let arr1=[];
// for(let i=0;i<arr.length;i++){
//     if(arr[i]!=arr[i+1]){
//         arr1.push(arr[i])
//     }
    
// }
// console.log(arr1);




// 5. Count vowels in a string

// Input: "javascript"
// Output: 3


// let str=prompt("enter any strong:")
// for(let i=0;i<str.length;i++){
//     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//         console.log("vowel");
//     }
// }



// 6. Check if string is palindrome

// Input: "madam"
// Output: true



// let str=prompt("enter any strong:")
// let rv="";

// for(let i=str.length-1;i>=0;i--){
//     rv=rv+str[i];
// }

// if(rv==str){
//     console.log("palindrom");
// }
// else{
//     console.log("not palindrom")
// }


// 7. Sort array without using sort()

// Input: [5, 1, 4, 2]
// Output: [1, 2, 4, 5]


// let arr = [5, 1, 4, 2];

// for (let i = 0; i < arr.length; i++) {
//     for (let j = i + 1; j < arr.length; j++) {
//         if (arr[i] > arr[j]) {
            
//             let temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
// }

// console.log(arr);



    let num=100;
    for(let i=0;i<num.length;i++){
        if(num[i]%3==0){
            console.log("fizz");
        }
        else if(num[i]%5==0){
    console.log("buzz");
        }

        else if(num[i]%3==0 && num[i]%5==0){
            console.log("fizzbuzz");
        }
    }
