import propTypes from "prop-types";

function Welcome (props){
    
    return( 
        props.userName ? <p className="gotUserName">Welcome {props.userName}</p> : <p className="noUserName">Please consider Signing In</p>
        );

}

Welcome.propTypes = {
    userName: propTypes.string,
}

export default Welcome;