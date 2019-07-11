[@react.component]
let make = (~label) => {
  <label htmlFor="url"> {React.string(label)} <input type_="text" id="url" /> </label>;
};
