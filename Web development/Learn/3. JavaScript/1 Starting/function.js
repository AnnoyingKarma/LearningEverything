function sum(a,b){
    console.log(a+b);
};

sum(100, 300);

sum=0;
for(let i=0; i<1000000000000; i++)
{
    sum=sum+i;
}
consol.log(sum);