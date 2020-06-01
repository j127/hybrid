import React from "react";
import { make as Counter } from "./components/Counter.bs";
import { Layout } from "./components/Layout.bs";

import "./styles/main.scss";

function App() {
  return (
    <Layout.make>
      <h1>Hybrid React (ReasonML / TypeScript ) App</h1>
      <Counter name="Alice" />
      <Counter name="Bob" />
      <Counter name="Cat" />
    </Layout.make>
  );
}

export default App;
