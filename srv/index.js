const express = require('express');
const bodyParser = require('body-parser');
const app = express();

const { exec } = require('child_process');

app.use(bodyParser.json());

app.get('/generate', (req, res) => {
  exec('/usr/local/bin/python srv/sampleScript.py', (err, stdout, stderr) => {
    if (err) {
      console.error(err);
      return res.status(500).send(err);
    }
    console.log(stdout, stderr);
    res.status(200).send("Envoyé !");
  });
});

app.listen(3000, () => {
  console.log('API started');
});
