// src/App.js
import React, { useState } from 'react';
import List from './List';
import './App.css';

function App() {
  const [items, setItems] = useState(['Item 1', 'Item 2', 'Item 3']);

  return (
    <div className="App">
      <h1>My List View</h1>
      <List items={items} />
    </div>
  );
}

export default App;

