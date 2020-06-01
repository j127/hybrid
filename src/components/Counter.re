[@react.component]
let make = (~name) => {
  let (count, setCount) = React.useState(() => 0);
  let lowerLimit = 0;
  let upperLimit = 10;
  let buttonPadding = "4px";

  <div className="box">
    <h2> {React.string(name)} </h2>
    <p>
      {React.string(name ++ " clicked " ++ string_of_int(count) ++ " times")}
    </p>
    <button
      style={ReactDOMRe.Style.make(~margin=buttonPadding, ())}
      className="button is-link"
      disabled={count <= lowerLimit}
      onClick={_ => setCount(_ => count > lowerLimit ? count - 1 : count)}>
      {React.string("-")}
    </button>
    <button
      style={ReactDOMRe.Style.make(~margin=buttonPadding, ())}
      className="button is-link"
      disabled={count >= upperLimit}
      onClick={_ => setCount(_ => count < upperLimit ? count + 1 : count)}>
      {React.string("+")}
    </button>
  </div>;
};