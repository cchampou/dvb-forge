
module.exports = {
  respondOk: (res, data) => res.status(200).send(data),
  respondMalformed: res => res.status(400).send(),
  respondServerError: res => res.status(500).send(),
};


