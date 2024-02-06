import React, { useRef } from "react";
import { ReactDOM } from "react";
import "./LoginForm.css";
import { useState } from "react";
const LoginForm = () => {
  const [isSignUp, setIsSignUp] = useState(true);
  return (
    <div
      className={`container ${isSignUp ? "right-panel-active" : ""}`}
      id="main"
    >
      <div className="sign-up">
        <form action="#">
          <h1>create account</h1>
          <div className="div-container">
            <a href="#">
              <i className="fab fa-facebook-f"></i>
            </a>
            <a href="#">
              <i className="fab fa-google-plus-g"></i>
            </a>
            <a href="#">
              <i className="fab fa-linkedin-in"></i>
            </a>
          </div>
          <p>or use ur email for registration</p>
          <input type="text" name="txt" placeholder="Name" required="" />
          <input type="Email" name="txt" placeholder="Email" required="" />
          <input
            type="password"
            name="pswd"
            placeholder="Password"
            required=""          />
          <button onClick={() => setIsSignUp(false)}> Sign Up</button>
        </form>
      </div>
      <div className="sign-in">
        <form action="#">
          <h1>Sign in</h1>
          <div className="div-container">
            <a href="#">
              <i className="fab fa-facebook-f"></i>
            </a>
            <a href="#">
              <i className="fab fa-google-plus-g"></i>
            </a>
            <a href="#">
              <i className="fab fa-linkedin-in"></i>
            </a>
          </div>
          <p>or use ur account</p>
          <input type="text" name="txt" placeholder="Name" required="" />
          <input type="Email" name="txt" placeholder="Email" required="" />
          <input
            type="password"
            name="pswd"
            placeholder="Password"
            required=""
          />
          <a href="#">Forget your password?</a>
          <button onClick={() => setIsSignUp(true)}> Sign In</button>
        </form>
      </div>
      <div className="overlay-container">
        <div className="overlay">
          <div className="overlay-left">
            <h1>Welcome Back</h1>
            <p>To keep connect with us please login with your personal info</p>
            <button id="signIn">Sign In</button>
          </div>
          <div className="overlay-right">
            <h1>Hello,Freind</h1>
            <p>Enter ur Personal details and start journey with us</p>
            <button id="signUp">Sign Up</button>
          </div>
        </div>
      </div>
    </div>
  );
};

export default LoginForm;
