import React, { useState } from "react";
import { CiMail, CiLock } from "react-icons/ci";
import { IoIosCloseCircle } from "react-icons/io";
import { FaPerson } from "react-icons/fa6";

const LoginPopup = () => {
  const [currentScreen, setCurrentScreen] = React.useState({
    isOpen: false,
    what: "screen_one",
  });

  React.useEffect(() => {
    console.log(currentScreen);
  }, [currentScreen]);
  return (
    <div className="all data">
      <div>
        <header>
          <h2 className="logo">Login Style</h2>
          <nav className="navigation">
            <button
              onClick={() => {
                setCurrentScreen({ isOpen: true, what: "screen_one" });
              }}
              className="btnlogin-popup"
            >
              Login
            </button>
          </nav>
        </header>
        <div>
          {currentScreen.isOpen && currentScreen.what === "screen_one" && (
            <div className="login_screen">
              <h2>Login</h2>
              <form action="#">
                <div className="input-box">
                  <span className="icon">
                        <CiMail/>
                  </span>
                  <input type="email" required />
                  <label>Email</label>
                </div>
                <div className="input-box">
                  <span className="icon">
                    <CiLock/>
                  </span>
                  <input type="password" required />
                  <label>Password</label>
                </div>
                <div className="remember-forgot">
                  <label>
                    <input type="checkbox" required />
                    Remember me
                  </label>
                  <a href="#">Forgot Password?</a>
                </div>
                <button type="submit" className="btn">
                  Login
                </button>
              </form>
              <button
                onClick={() =>
                  setCurrentScreen({ isOpen: true, what: "screen_two" })
                }
              >
                {" "}
                click for register
              </button>
              <button
                className="close_button"
                onClick={() =>
                  setCurrentScreen({ isOpen: false, what: "screen_one" })
                }
              >
                Close
              </button>
            </div>
          )}
          {currentScreen.isOpen && currentScreen.what === "screen_two" && (
            <div className="register_screen">
              <h2>Registration</h2>
              <form action="#">
                <div className="input-box">
                  <span className="icon">
                      <FaPerson/>
                  </span>
                  <input type="text" required />
                  <label>Username</label>
                </div>
                <div className="input-box">
                  <span className="icon"> 
                      <CiMail/>
                  </span>
                  <input type="email" required />
                  <label>Email</label>
                </div>
                <div className="input-box">
                  <span className="icon">
                      <CiLock/>
                  </span>
                  <input type="password" required />
                  <label>Password</label>
                </div>
                <div className="remember-forgot">
                  <label>
                    <input type="checkbox" required />I agree to the terms &
                    conditions
                  </label>
                </div>
                <button type="submit" className="btn">
                  Register
                </button>
                <div className="login-register">
                  <p>
                    Already have an account?{" "}
                    <a href="#" className="login-link">
                      Login
                    </a>
                  </p>
                </div>
              </form>
              <button
                onClick={() =>
                  setCurrentScreen({ isOpen: true, what: "screen_one" })
                }
              >
                login
              </button>
              <button
                className="close_button"
                onClick={() =>
                  setCurrentScreen({ isOpen: false, what: "screen_one" })
                }
              >
                Close
              </button>
            </div>
          )}
        </div>
      </div>
    </div>
  );
};
export default LoginPopup;
