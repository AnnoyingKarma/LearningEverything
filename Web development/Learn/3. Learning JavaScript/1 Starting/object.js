const userData={
    firstName:"Rick",
    age:20,
    gender:"male"
}
userData["firstName"]="Rock";
console.log(userData["firstName"]);

const data=[
    {
        firstName:"Rahul",
        gender:"male"
    },
    {
        firstName:"Rina",
        gender:"female"
    },
    {
        firstName:"Toro",
        gender:"male"
    }
];
for(let i=0; i<data.length; i++)
{
    if(data[i]["gender"]==="male")
    {
        console.log(data[i]["firstName"]);
    }
}