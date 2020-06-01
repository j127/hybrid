module Layout = {
  [@react.component]
  let make = (~children) => {
    <div>
      <Navbar.make />
      <section className="section">
        <div className="container content"> children </div>
      </section>
    </div>;
  };
};