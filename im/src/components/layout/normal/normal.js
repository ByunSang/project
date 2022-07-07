import React from "react";
import NormalHeader from "./header";
import NormalNavigation from "./navigation";

class Normal extends React.Component{
    render(){
        return (
        <div className="w-full flex flex-col">
            <NormalHeader/>
            <NormalNavigation/>
        </div>
        )
    }
}

export default Normal;