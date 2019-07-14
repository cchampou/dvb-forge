const { respondMalformed } = require('./responses');
const { spawn } = require('child_process');

const express = require('express');

const port = process.env.PORT || 4000;

const app = express();

const spawnScript = url => {
  const script = spawn("python", ["srv/sampleScript.py"]);
  script.stdout.on('data', (data) => {
    console.log(`stdout: ${data}`);
  });

  script.stderr.on('data', (data) => {
    console.log(`stderr: ${data}`);
  });

  script.on('close', (code) => {
    console.log(`child process exited with code ${code}`);
  });
};

app.get('/status', (req, res) => {
  return res.status(200).send("Running");
});

app.get('/generate', (req, res) => {
  const { url } = req.query;
  if (!url) {
    return respondMalformed(res);
  }
  spawnScript(url);
  return res.status(200).send();
});

app.listen(port, () => {
  console.info(
    `Server is running on port ${port}`)
});
