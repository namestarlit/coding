import React from 'react'

/*
 * Declaring Default props and PropTypes
 */

/* using React.createClass */
const MyComponent = React.createClass({
    propTypes: {
      name: propTypes.string,
      position: propTypes.number
    },

    getDefaultProps() {
      return {
        name: "Home",
        position: 1
      };
    },

    render() {
      return (
        <div></div>;
      )
    }
})


/* using React.Component */
class AnotherComponent extends React.Component {
  constructor(props) {
    super(props);
  }

  render() {
    return (
      <div></div>
    );
  }
}

MyComponent.propTypes = {
  name: React.PropTypes.string,
  position: React.propTypes.number
};

MyComponent.defaultProps = {
  name: 'Home',
  position: 1
};

/* shortuct if the property initializers is turned on */
class NextComponent extends React.Component {
  static propTypes = {
    name: React.PropTypes.string,
    position: React.PropTypes.number
  };

  static defaultProps = {
    name: 'Home',
    position: 1
  };

  constructor(props) {
    super(props);
  }

  render() {
    return (
    <div></div>;
    );
  }
}

export default MyComponent;
// export default AnotherComponent;
// export default NextComponent;
