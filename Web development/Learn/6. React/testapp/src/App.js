import Header from "./components/Header";
import Main from "./components/Main";
import Footer from "./components/Footer";
import Card from "./components/Card";
import Grocery from "./components/Grocery";
import Welcome from "./components/Welcome";
import Lists from "./components/Lists";

function App() {
    return (
        <>
            <Header />
            <Welcome userName="Acyle" />
            <Lists />
            <Main />
            <Grocery
                name="Veg Chapati Roll"
                price={80}
                quantity={4}
                isVeg={true}
            />
            <Grocery />
            <Card />
            <Footer />
        </>
    );
}

export default App;