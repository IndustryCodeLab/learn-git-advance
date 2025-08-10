document.getElementById("btn").addEventListener("click",mypass);
function mypass(){
    let str="abcdefghijklmnopqrstuvwxyz1234567890/.,'[,!@#$%%^^"
    let length=str.length;
    let password=""
    for(let i=0;i<=7;i++){
       const idxno=Math.floor((Math.random()*length));
       const ans =str.charAt(idxno);
       password+=ans;
    }
    document.getElementById("demo").innerHTML=password;
}