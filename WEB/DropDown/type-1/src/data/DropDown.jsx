import React from "react";
import ReactDOM from "react-dom/client";
import './DropDown.css';
import myimg from '../asset/images/Screenshot from 2024-01-27 10-53-58.png';
import user from '../asset/images/user.png';
import edit from '../asset/images/edit.png';
import inbox from '../asset/images/envelope.png';
import setting from '../asset/images/settings.png';
import help from '../asset/images/question.png';
import logout from '../asset/images/log-out.png';
import { useState,useEffect,useRef } from "react";

const DropDown = () => {
  const  [open, setOpen]=useState(false);
  let menuRef=useRef();
  useEffect(()=>{
    let handler=(e)=>{
      if(!menuRef.current.contains(e.target)){
        setOpen(false);
      }
    };
    document.addEventListener("mousedown",handler);
    return()=>{
      document.removeEventListener("mousedown",handler);
    }
  });
  return (
    <div className="menu-container "ref={menuRef}>
      <div className="menu-trigger" onClick={()=>{setOpen(!open)}}>

        <img src={myimg} alt="myimg1"></img>  
        </div>
        <div className={`dropdown-menu ${open?'active':'inactive'}`} >
          <h3>Utsav<br/><span>Website designer</span></h3>
          <ul>
            <DropDownItem img={user} text={'My Profile'}/>
            <DropDownItem img={edit} text={'Edit Profile'}/>
            <DropDownItem img={inbox} text={' Inbox'}/>
            <DropDownItem img={setting} text={'Setting'}/>
            <DropDownItem img={help} text={'Help'}/>
            <DropDownItem img={logout} text={'Logout'}/>
          </ul>
        </div>
    </div>
  );
}
function DropDownItem(props){
  return(
    <li className="dropdownItem">
      <img src={props.img}></img>
      <a>{props.text}</a>
    </li>
  );
}

export default DropDown;
