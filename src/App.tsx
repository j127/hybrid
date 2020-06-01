import React from "react";
import { make as Greeting } from "./components/Greeting.bs";
import { Layout } from "./components/Layout.bs";

import "./styles/main.scss";

function App() {
  return (
    <Layout.make>
      <h1>Hybrid React (ReasonML / TypeScript ) App</h1>
      <Greeting name="Alice" />
      <Greeting name="Bob" />
      <Greeting name="Cat" />
    </Layout.make>
  );
}

export default App;
