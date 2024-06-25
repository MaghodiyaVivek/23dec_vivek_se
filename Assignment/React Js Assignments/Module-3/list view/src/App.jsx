// src/App.js
import React, { useState } from 'react';
import List from './List';
import './App.css';

function App() {
  const [items, setItems] = useState(['Item 1', 'Item 2', 'Item 3']);
  const [newItem, setNewItem] = useState('');

  const handleAddItem = () => {
    if (newItem.trim() !== '') {
      setItems([...items, newItem]);
      setNewItem('');
    }
  };

  return (
    <div className="App">
      <h1>My List View</h1>
      <input
        type="text"
        value={newItem}
        onChange={(e) => setNewItem(e.target.value)}
        placeholder="Add a new item"
      />
      <button onClick={handleAddItem}>Add Item</button>
      <List items={items} />
    </div>
  );
}

export default App;
