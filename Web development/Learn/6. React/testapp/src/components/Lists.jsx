function Lists() {
    const fruits = ["Apple", "Mango", "Cherry", "Grapes", "Strawberry"];
    const fruitList = fruits.map((fruit) => <li>{fruit}</li>);

    const bookRecord = [
        { srlNo: "1", bookName: "Swaha", author: "Raj Bharti" },
        { srlNo: "2", bookName: "Time Machine", author: "Yogesh Maali" },
        {
            srlNo: "3",
            bookName: "The Soldiers: Who also Have Hearts",
            author: "Kusum Chauhan",
        },
    ];

    bookRecord.sort((a,b)=>(a.bookName.localeCompare(b.bookName)));

    const bookRecordPrint = bookRecord.map((bookData) => {
        return (
            <li key={bookData.srlNo}>
                <b>{bookData.bookName}</b> &#8651; {bookData.author}
            </li>
        );
    });
    


    return (
        <>
            <ul>{fruitList}</ul>
            <ul>{bookRecordPrint}</ul>
        </>
    );
}

export default Lists;
