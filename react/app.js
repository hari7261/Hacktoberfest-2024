
import React from 'react';
import './App.css';
import GfGWeatherApp from './weather';
import Sidebar from './Sidebar/sidenotch';
import Barchart from './components/barchart';
import Linechart from './components/linechart';
import Polarchart from './components/polarchart';
import { Router, Routes, Route } from 'react-router-dom';

function App(){
  return (
    <Router>
      <Routes>
        <Route path="/" element={<GfGWeatherApp />} /> 
        <Route path="/projects" element={<Sidebar />} /> 
        <Route path="/skills" element={<Barchart />} /> 
        <Route path="/resume" element={<Linechart />} /> 
        <Route path="/contact" element={<Polarchart />} /> 
      </Routes>
    </Router>
  );
}
export default App;

          
         
          
