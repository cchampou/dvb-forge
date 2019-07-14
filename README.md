# DVB Forge
*This is a work in progress project.*
This projet is about generating transport stream files. First intented to help broadcasters build custom streams with HbbTv apps, you can try it with a DVB modulator.

## Features

- [x] Send HbbTv url
- [ ] Get a TS file containing 2 channels with sample AV, and the HbbTv via HTTP embedded
- [ ] View file construction progress

## Run locally for development
This application is made with ReasonML. Please visit [official documentation](https://reasonml.github.io/).
Assuming you have the minimal ReasonML / BuckleScript tooling installed :

1. Clone the project
2. Install local packages with `yarn install`
3. Launch BS compiler with `yarn start`
4. In a new terminal, execute `yarn server` to start the development server

**Note** : To be able to generate transport streams locally, you need to have `opencaster` cli tools and `ffmpeg` installed.


