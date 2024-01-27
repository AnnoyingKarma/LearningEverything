let isOpen=true;

async function study(){
    try{
        await loading;
    }
    catch(error){
        console.log("Stuck on Loading!");
    }
    finally{
        console.log("Runs anyways.");
    }
}

study();