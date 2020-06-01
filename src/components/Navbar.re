[@react.component]
let make = () => {
  <nav className="navbar is-primary">
    <div className="navbar-brand">
      <a className="navbar-item" href="/"> {React.string("Hybrid Site")} </a>
    </div>
    <div id="navMenuColorprimary-example" className="navbar-menu">
      <div className="navbar-start">
        <a className="navbar-item" href="/about"> {React.string("About")} </a>
      </div>
    </div>
  </nav>;
};