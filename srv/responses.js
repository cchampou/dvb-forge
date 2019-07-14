
module.exports = {
  respondOk: res => res.status(200).send(),
  respondMalformed: res => res.status(400).send(),
  respondServerError: res => res.status(500).send(),
};


