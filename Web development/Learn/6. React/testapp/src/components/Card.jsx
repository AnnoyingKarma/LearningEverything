function Card() {
    return (
        <>
            <div className="cardOuterBox">
                <h2 className="cardName">Cyclizar</h2>
                <img
                    className="cardTypeLogo"
                    alt="dragon type logo"
                    src="https://ih1.redbubble.net/image.934950887.3397/st,small,507x507-pad,600x600,f8f8f8.jpg"
                ></img>
                <img
                    className="cardTypeLogo"
                    alt="normal type logo"
                    src="https://orig00.deviantart.net/e858/f/2012/143/f/c/fcdc26c0d1f793b588ce9afe3713c0ae-d50w4gu.png"
                ></img>
                <img
                    alt="Image of Cyclizar"
                    className="cardImage"
                    src="https://archives.bulbagarden.net/media/upload/7/74/0967Cyclizar.png"
                ></img>
                <hr />
                <h3>&lceil; Acceleration Drive &rfloor;</h3>
                <hr />
                <p>
                    Flip a coin, If heads. during your opponent's next turn,
                    prevent all damage from and effects of attacks done to this
                    Pokémon.
                </p>
                <hr />
            </div>
        </>
    );
}

export default Card;
