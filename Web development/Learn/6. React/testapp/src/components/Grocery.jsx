import PropType from "prop-types";

function Grocery(props) {
    return (
        <>
            <div>
                <h3>Item-Name: {props.name}</h3>
                <p>Price: {props.price}</p>
                <p>Quantity: {props.quantity}</p>
                <p>Veg: {props.isVeg ? "Yup" : "Noooo"}</p>
            </div>
        </>
    );
}
Grocery.propTypes = {
    name: PropType.string,
    price: PropType.number,
    quantity: PropType.number,
    isVeg: PropType.bool,
};
Grocery.defaultProps = {
    name: "Some Grocery Item",
    price: 0,
    quantity: 0,
    isVeg: false,
};
export default Grocery;
