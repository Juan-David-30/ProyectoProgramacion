// Requiring used libraries
const express = require('express');
const SerialPort = require('serialport');
const app = express();

// Set the serial port name depending on the connection with the computer please configure when setting up the server 
const portName = 'port';

// Create a serial port instance
const port = new SerialPort(portName, { baudRate: 9600 });

// Open the port and handle errors
port.on('error', err => {
  console.error('Error:', err.message);
});

// Define an endpoint to send data to HC-06 which will manage the arduino
app.post('/sendCommand/:message', (req, res) => {
  // Write the message sent from the front-end
  port.write(req.params.message, err => {
    // Maneging if there is an error 
    if (err) {
      console.error('Error writing to port:', err.message);
      res.status(500).send('Error writing data');
    } else {
      console.log('Data sent to HC-06');
      res.status(200).send('Data sent successfully');
    }
  });
});

// Start the server
const portNumber = 8080; // Choose a port number
app.listen(portNumber, () => {
  // Checking that the server is running properly 
  console.log(`Server running on port ${portNumber}`);
});