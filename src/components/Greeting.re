[@react.component]
let make = (~name) => {
  let (count, setCount) = React.useState(() => 0);
  let lowerLimit = 0;
  let upperLimit = 10;
  <div className="box">
    <p>
      {React.string(name ++ " clicked " ++ string_of_int(count) ++ " times")}
    </p>
    <button
      disabled={count <= lowerLimit}
      onClick={_ => setCount(_ => count > lowerLimit ? count - 1 : count)}>
      {React.string("-")}
    </button>
    <button
      disabled={count >= upperLimit}
      onClick={_ => setCount(_ => count < upperLimit ? count + 1 : count)}>
      {React.string("+")}
    </button>
  </div>;
};